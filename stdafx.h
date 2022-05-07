// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#ifndef STDAFX_H
#define STDAFX_H

#ifdef __APPLE__
#ifndef __unix__
#define __unix__ 1
#endif
#endif

#define _USE_MATH_DEFINES
#include <cmath>
#ifdef _MSC_VER
// memory debug functions
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>
#endif
// operating system
#ifdef _WIN32
#include "targetver.h"
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <shlobj.h>
#include <windows.h>
#undef NOMINMAX
#endif
#ifdef __unix__
#include <sys/stat.h>
#endif
// stl
#define _USE_MATH_DEFINES
#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <cassert>
#include <cctype>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <filesystem>
#include <forward_list>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <mutex>
#include <numeric>
#include <optional>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <string>
#include <thread>
#include <tuple>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <variant>
#include <vector>

#include "glad/glad.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#ifndef GLFW_TRUE
#define GLFW_FALSE 0
#define GLFW_TRUE 1
#define glfwGetKeyName(a, b) ("")
#define glfwFocusWindow(w)
#endif

#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_CTOR_INIT
#include <glm/glm.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/matrix_access.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/packing.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/euler_angles.hpp>
#include <glm/gtx/matrix_transform_2d.hpp>
#include <glm/gtx/norm.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtx/string_cast.hpp>

int const null_handle = 0;

#include "openglmatrixstack.h"
#define STRINGIZE_DETAIL(x) #x
#define STRINGIZE(x) STRINGIZE_DETAIL(x)
#define glDebug(x)                     \
    if (GLAD_GL_GREMEDY_string_marker) \
        glStringMarkerGREMEDY(0, __FILE__ ":" STRINGIZE(__LINE__) ": " x);

#include "imgui/imgui.h"
#define ImVec2S(a, b) ImVec2(a* Global.ui_scale, b* Global.ui_scale)

#include "crashreporter.h"

#endif
