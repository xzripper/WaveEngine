#include <string>

#include <vector>

#include "window.h"

#include "utils/strformat.h"

#include "../p3d/include/load_prc_file.h"

void Window::initialize() {
    this->p_framework->open_framework();

    this->p_framework->set_window_title(this->window_title);

//    load_prc_file_data("", "notify-level error");
//    load_prc_file_data("", "default-directnotify-level error");

    load_prc_file_data("", "show-frame-rate-meter true");
    load_prc_file_data("", "gl-debug #t");
    load_prc_file_data("", StringFormat::format("win-size %1 %2", std::vector<std::string> {std::to_string(this->window_size[0]), std::to_string(this->window_size[1])}));
    load_prc_file_data("", StringFormat::format("win-origin %1 %2", std::vector<std::string> {std::to_string(this->window_position[0]), std::to_string(this->window_position[1])}));

    this->window = this->p_framework->open_window();

    this->renderer = new Renderer(this->p_framework, this->window);

    this->set3DBackground(LRGB(0, 0, 0));

    this->window->enable_keyboard();
    this->window->setup_trackball();
}

void Window::run() const {
    this->p_framework->main_loop();
    this->p_framework->close_framework();
}

void Window::VSync() {
    if(this->vsync) {
        load_prc_file_data("", "sync-video false");

        this->vsync = false;
    } else {
        load_prc_file_data("", "sync-video true");

        this->vsync = true;
    }
}

void Window::set3DBackground(LRGB RGB) const {
    this->window->get_display_region_3d()->set_clear_color(RGB.getLColor());
}
