﻿/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/

#include "editoruipanels.h"

#include "AnimModel.h"
#include "Camera.h"
#include "Event.h"
#include "Globals.h"
#include "MemCell.h"
#include "Track.h"
#include "renderer.h"
#include "scenenodegroups.h"
#include "stdafx.h"
#include "utilities.h"

void itemproperties_panel::update(scene::basic_node const *Node) {
    m_node = Node;

    if (false == is_open) {
        return;
    }

    text_lines.clear();
    m_grouplines.clear();

    std::string textline;

    // scenario inspector
    auto const *node{Node};
    auto const &camera{Global.pCamera};

    if (node == nullptr) {
        auto const mouseposition{camera.Pos + GfxRenderer->Mouse_Position()};
        textline = "mouse location: [" + to_string(mouseposition.x, 2) + ", " +
                   to_string(mouseposition.y, 2) + ", " +
                   to_string(mouseposition.z, 2) + "]";
        text_lines.emplace_back(textline, Global.UITextColor);
        return;
    }
    /*
        // TODO: bind receiver in the constructor
        if( ( m_itemproperties != nullptr )
         && ( m_itemproperties->node != nullptr ) )  {
            // fetch node data; skip properties which were changed until they're
       retrieved by the observer auto const *node { m_itemproperties->node };

            if( m_itemproperties->name.second == false ) {
                m_itemproperties->name.first = ( node->name().empty() ? "(none)"
       : node->name() );
            }
            if( m_itemproperties->location.second == false ) {
                m_itemproperties->location.first = node->location();
            }
        }
    */
    textline = "name: " +
               (node->name().empty() ? "(none)" : Bezogonkow(node->name())) +
               "\nlocation: [" + to_string(node->location().x, 2) + ", " +
               to_string(node->location().y, 2) + ", " +
               to_string(node->location().z, 2) + "]" + " (distance: " +
               to_string(
                   glm::length(
                       glm::dvec3{node->location().x, 0.0, node->location().z} -
                       glm::dvec3{camera.Pos.x, 0.0, camera.Pos.z}),
                   1) +
               " m)";
    text_lines.emplace_back(textline, Global.UITextColor);

    // subclass-specific data
    // TBD, TODO: specialized data dump method in each node subclass, or data
    // imports in the panel for provided subclass pointer?
    if (typeid(*node) == typeid(TAnimModel)) {
        auto const *subnode = static_cast<TAnimModel const *>(node);

        textline =
            "angle: " + to_string(clamp_circular(subnode->vAngle.y, 360.f), 2) +
            " deg";
        textline += "; lights: ";
        if (subnode->iNumLights > 0) {
            textline += '[';
            for (int lightidx = 0; lightidx < subnode->iNumLights; ++lightidx) {
                textline += to_string(subnode->lsLights[lightidx]);
                if (lightidx < subnode->iNumLights - 1) {
                    textline += ", ";
                }
            }
            textline += ']';
        } else {
            textline += "(none)";
        }
        text_lines.emplace_back(textline, Global.UITextColor);

        // 3d shape
        auto modelfile{
            ((subnode->pModel != nullptr) ? subnode->pModel->NameGet()
                                          : "(none)")};
        if (modelfile.find(szModelPath) == 0) {
            // don't include 'models/' in the path
            modelfile.erase(0, std::string{szModelPath}.size());
        }
        // texture
        auto texturefile{
            ((subnode->Material()->replacable_skins[1] != null_handle)
                 ? GfxRenderer
                       ->Material(subnode->Material()->replacable_skins[1])
                       .name
                 : "(none)")};
        if (texturefile.find(szTexturePath) == 0) {
            // don't include 'textures/' in the path
            texturefile.erase(0, std::string{szTexturePath}.size());
        }
        text_lines.emplace_back("mesh: " + modelfile, Global.UITextColor);
        text_lines.emplace_back("skin: " + texturefile, Global.UITextColor);
    } else if (typeid(*node) == typeid(TTrack)) {
        auto const *subnode = static_cast<TTrack const *>(node);
        // basic attributes
        textline =
            "isolated: " +
            ((subnode->pIsolated != nullptr)
                 ? Bezogonkow(subnode->pIsolated->asName)
                 : "(none)") +
            "\nvelocity: " +
            to_string(
                subnode->SwitchExtension ? subnode->SwitchExtension->fVelocity
                                         : subnode->fVelocity) +
            "\nwidth: " + to_string(subnode->fTrackWidth) + " m" +
            "\nfriction: " + to_string(subnode->fFriction, 2) +
            "\nquality: " + to_string(subnode->iQualityFlag);
        text_lines.emplace_back(textline, Global.UITextColor);
        // textures
        auto texturefile{
            ((subnode->m_material1 != null_handle)
                 ? GfxRenderer->Material(subnode->m_material1).name
                 : "(none)")};
        if (texturefile.find(szTexturePath) == 0) {
            texturefile.erase(0, std::string{szTexturePath}.size());
        }
        auto texturefile2{
            ((subnode->m_material2 != null_handle)
                 ? GfxRenderer->Material(subnode->m_material2).name
                 : "(none)")};
        if (texturefile2.find(szTexturePath) == 0) {
            texturefile2.erase(0, std::string{szTexturePath}.size());
        }
        textline = "skins:\n " + texturefile + "\n " + texturefile2;
        text_lines.emplace_back(textline, Global.UITextColor);
        // paths
        textline = "paths: ";
        for (auto const &path : subnode->m_paths) {
            textline +=
                "\n [" +
                to_string(path.points[segment_data::point::start].x, 3) + ", " +
                to_string(path.points[segment_data::point::start].y, 3) + ", " +
                to_string(path.points[segment_data::point::start].z, 3) +
                "]->" + "[" +
                to_string(path.points[segment_data::point::end].x, 3) + ", " +
                to_string(path.points[segment_data::point::end].y, 3) + ", " +
                to_string(path.points[segment_data::point::end].z, 3) + "] ";
        }
        text_lines.emplace_back(textline, Global.UITextColor);
        // events
        textline.clear();

        std::vector<std::pair<
            std::string, TTrack::event_sequence const *>> const eventsequences{
            {"ev0", &subnode->m_events0}, {"ev0all", &subnode->m_events0all},
            {"ev1", &subnode->m_events1}, {"ev1all", &subnode->m_events1all},
            {"ev2", &subnode->m_events2}, {"ev2all", &subnode->m_events2all}};

        for (auto const &eventsequence : eventsequences) {
            if (eventsequence.second->empty()) {
                continue;
            }

            textline +=
                (textline.empty() ? "" : "\n") + eventsequence.first + ": [";
            for (auto const &event : *(eventsequence.second)) {
                if (textline.back() != '[') {
                    textline += ", ";
                }
                textline +=
                    (event.second != nullptr ? Bezogonkow(event.second->m_name)
                                             : event.first + " (missing)");
            }
            textline += "] ";
        }
        text_lines.emplace_back(textline, Global.UITextColor);
    } else if (typeid(*node) == typeid(TMemCell)) {
        auto const *subnode = static_cast<TMemCell const *>(node);

        textline = "data: [" + subnode->Text() + "]" + " [" +
                   to_string(subnode->Value1(), 2) + "]" + " [" +
                   to_string(subnode->Value2(), 2) + "]";
        text_lines.emplace_back(textline, Global.UITextColor);
        textline = "track: " + (subnode->asTrackName.empty()
                                    ? "(none)"
                                    : Bezogonkow(subnode->asTrackName));
        text_lines.emplace_back(textline, Global.UITextColor);
    }

    update_group();
}

void itemproperties_panel::update_group() {
    auto const grouphandle{m_node->group()};

    if (grouphandle == null_handle) {
        m_grouphandle = null_handle;
        m_groupprefix.clear();
        return;
    }

    auto const &nodegroup{scene::Groups.group(grouphandle)};

    if (m_grouphandle != grouphandle) {
        // calculate group name from shared prefix of item names
        std::vector<std::reference_wrapper<std::string const>> names;
        // build list of custom item and event names
        for (auto const *node : nodegroup.nodes) {
            auto const &name{node->name()};
            if (name.empty() || name == "none") {
                continue;
            }
            names.emplace_back(name);
        }
        for (auto const *event : nodegroup.events) {
            auto const &name{event->m_name};
            if (name.empty() || name == "none") {
                continue;
            }
            names.emplace_back(name);
        }
        // find the common prefix
        if (names.size() > 1) {
            m_groupprefix = names.front();
            for (auto const &name : names) {
                // NOTE: first calculation runs over two instances of the same
                // name, but, eh
                auto const prefixlength{len_common_prefix(m_groupprefix, name)};
                if (prefixlength > 0) {
                    m_groupprefix = m_groupprefix.substr(0, prefixlength);
                } else {
                    m_groupprefix.clear();
                    break;
                }
            }
        } else {
            // less than two names to compare means no prefix
            m_groupprefix.clear();
        }
        m_grouphandle = grouphandle;
    }

    m_grouplines.emplace_back(
        "nodes: " + to_string(static_cast<int>(nodegroup.nodes.size())) +
            "\nevents: " + to_string(static_cast<int>(nodegroup.events.size())),
        Global.UITextColor);
    m_grouplines.emplace_back(
        "names prefix: " + (m_groupprefix.empty() ? "(none)" : m_groupprefix),
        Global.UITextColor);
}

void itemproperties_panel::render() {
    if (false == is_open) {
        return;
    }
    if (true == text_lines.empty()) {
        return;
    }

    auto flags = ImGuiWindowFlags_NoFocusOnAppearing |
                 ImGuiWindowFlags_NoCollapse |
                 (size.x > 0 ? ImGuiWindowFlags_NoResize : 0);

    if (size.x > 0) {
        ImGui::SetNextWindowSize(ImVec2S(size.x, size.y));
    }
    if (size_min.x > 0) {
        ImGui::SetNextWindowSizeConstraints(
            ImVec2S(size_min.x, size_min.y), ImVec2(size_max.x, size_max.y));
    }
    auto const panelname{(title.empty() ? m_name : title) + "###" + m_name};
    if (true == ImGui::Begin(panelname.c_str(), nullptr, flags)) {
        // header section
        for (auto const &line : text_lines) {
            ImGui::TextColored(
                ImVec4(line.color.r, line.color.g, line.color.b, line.color.a),
                line.data.c_str());
        }
        // group section
        render_group();
    }
    ImGui::End();
}

bool itemproperties_panel::render_group() {
    if (m_node == nullptr) {
        return false;
    }
    if (m_grouplines.empty()) {
        return false;
    }

    if (false == ImGui::CollapsingHeader("Parent Group")) {
        return false;
    }

    for (auto const &line : m_grouplines) {
        ImGui::TextColored(
            ImVec4(line.color.r, line.color.g, line.color.b, line.color.a),
            line.data.c_str());
    }

    return true;
}

nodebank_panel::nodebank_panel(std::string const &Name, bool const Isopen)
    : ui_panel(Name, Isopen) {
    size_min = {100, 50};
    size_max = {1000, 1000};

    memset(m_nodesearch, 0, sizeof(m_nodesearch));

    std::ifstream file;
    file.open("nodebank.txt", std::ios_base::in | std::ios_base::binary);

    std::string line;
    while (std::getline(file, line)) {
        if (line.size() < 4) {
            continue;
        }
        auto const labelend{line.find("node")};
        auto const nodedata{
            (labelend == std::string::npos ? ""
             : labelend == 0               ? line
                                           : line.substr(labelend))};
        auto const label{
            (labelend == std::string::npos ? line
             : labelend == 0               ? generate_node_label(nodedata)
                                           : line.substr(0, labelend))};

        m_nodebank.push_back({label, std::make_shared<std::string>(nodedata)});
    }
    // sort alphabetically content of each group
    auto groupbegin{m_nodebank.begin()};
    auto groupend{groupbegin};
    while (groupbegin != m_nodebank.end()) {
        groupbegin = std::find_if(
            groupend, m_nodebank.end(),
            [](auto const &Entry) { return (false == Entry.second->empty()); });
        groupend = std::find_if(
            groupbegin, m_nodebank.end(),
            [](auto const &Entry) { return (Entry.second->empty()); });
        std::sort(
            groupbegin, groupend, [](auto const &Left, auto const &Right) {
                return (Left.first < Right.first);
            });
    }
}

void nodebank_panel::render() {
    if (false == is_open) {
        return;
    }

    auto flags = ImGuiWindowFlags_NoFocusOnAppearing |
                 ImGuiWindowFlags_NoCollapse |
                 (size.x > 0 ? ImGuiWindowFlags_NoResize : 0);

    if (size.x > 0) {
        ImGui::SetNextWindowSize(ImVec2S(size.x, size.y));
    }
    if (size_min.x > 0) {
        ImGui::SetNextWindowSizeConstraints(
            ImVec2S(size_min.x, size_min.y), ImVec2S(size_max.x, size_max.y));
    }
    auto const panelname{(title.empty() ? name() : title) + "###" + name()};

    if (true == ImGui::Begin(panelname.c_str(), nullptr, flags)) {
        ImGui::RadioButton("modify node", (int *)&mode, MODIFY);
        ImGui::SameLine();
        ImGui::RadioButton("insert from bank", (int *)&mode, ADD);
        ImGui::SameLine();
        ImGui::RadioButton("copy to bank", (int *)&mode, COPY);

        ImGui::PushItemWidth(-1);
        ImGui::InputTextWithHint(
            "Search", "Search node bank", m_nodesearch,
            IM_ARRAYSIZE(m_nodesearch));
        if (ImGui::ListBoxHeader("##nodebank", ImVec2(-1, -1))) {
            auto idx{0};
            auto isvisible{false};
            auto const searchfilter{std::string(m_nodesearch)};
            for (auto const &entry : m_nodebank) {
                if (entry.second->empty()) {
                    // special case, header indicator
                    isvisible = ImGui::CollapsingHeader(entry.first.c_str());
                } else {
                    if (false == isvisible) {
                        continue;
                    }
                    if ((false == searchfilter.empty()) &&
                        (false == contains(entry.first, searchfilter))) {
                        continue;
                    }
                    auto const label{
                        " " + entry.first + "##" + std::to_string(idx)};
                    if (ImGui::Selectable(
                            label.c_str(), entry.second == m_selectedtemplate))
                        m_selectedtemplate = entry.second;
                    ++idx;
                }
            }
            ImGui::ListBoxFooter();
        }
    }

    ImGui::End();
}

void nodebank_panel::add_template(const std::string &desc) {
    auto const label{generate_node_label(desc)};
    m_nodebank.push_back({label, std::make_shared<std::string>(desc)});

    std::ofstream file;
    file.open(
        "nodebank.txt",
        std::ios_base::out | std::ios_base::app | std::ios_base::binary);
    file << label << " " << desc;
}

const std::string *nodebank_panel::get_active_template() {
    return m_selectedtemplate.get();
}

std::string nodebank_panel::generate_node_label(std::string Input) const {
    auto tokenizer{cParser(Input)};
    tokenizer.getTokens(9, false);  // skip leading tokens
    auto model{tokenizer.getToken<std::string>(false)};
    auto texture{tokenizer.getToken<std::string>(false)};
    replace_slashes(model);
    erase_extension(model);
    replace_slashes(texture);
    return (texture == "none" ? model : model + " (" + texture + ")");
}
