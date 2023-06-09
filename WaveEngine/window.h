#ifndef WAVEENGINE_WINDOW_H
#define WAVEENGINE_WINDOW_H

#define WINDOW_DEFAULT_WIDTH 500
#define WINDOW_DEFAULT_HEIGHT 500

#define WINDOW_DEFAULT_X 10
#define WINDOW_DEFAULT_Y 10

#pragma once

#include <iostream>

#include <utility>

#include "renderer.h"

#include "LRGB.h"

#include "../p3d/include/pandaFramework.h"

class Renderer;
class Model;

class Window {
public:
    PandaFramework *p_framework = new PandaFramework();
    WindowFramework *window = nullptr;

    Renderer *renderer;

    bool vsync = true;

    std::string window_title;

    int window_size [2] = {WINDOW_DEFAULT_WIDTH, WINDOW_DEFAULT_HEIGHT};
    int window_position [2] = {WINDOW_DEFAULT_X, WINDOW_DEFAULT_Y};

    /**
     * Window initializer.
     *
     * @param title Window title.
     */
    explicit Window(std::string title) {
        this->window_title = std::move(title);
    }

    /**
     * Window initializer with possibility to set window size and position.
     *
     * @param title Window title.
     * @param size Window size.
     * @param position Window position.
     */
    Window(std::string title, const int size [2], const int position [2]) {
        this->window_title = std::move(title);

        this->window_size[0] = size[0];
        this->window_size[1] = size[1];

        this->window_position[0] = position[0];
        this->window_position[1] = position[1];
    }

    /**
     * Initialize window.
     */
    void initialize();

    /**
     * Run window.
     */
     void run() const;

    /**
     * Enable/disable VSync.
     */
    void VSync();

     /**
      * Set 3D display background.
      */
    void set3DBackground(LRGB RGB) const;
};

#endif
