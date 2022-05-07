#pragma once

#include "Texture.h"
#include "framebuffer.h"
#include "shader.h"
#include "vao.h"

namespace gl {
class postfx {
   private:
    gl::program program;
    static std::shared_ptr<gl::shader> vertex;
    static std::shared_ptr<gl::vao> vao;

   public:
    postfx(const std::string &s);
    postfx(const shader &s);

    void attach();
    void apply(opengl_texture &src, framebuffer *dst);
    void apply(std::vector<opengl_texture *> src, framebuffer *dst);
};
}  // namespace gl
