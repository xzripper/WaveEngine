#ifndef WAVEENGINE_RENDERER_H
#define WAVEENGINE_RENDERER_H

#pragma once

#include "model.h"

#include "../p3d/include/pandaFramework.h"
#include "../p3d/include/windowFramework.h"

class Model;

class Renderer {
public:
    PandaFramework *p_framework;
    WindowFramework *window;

    /**
     * Initialize render.
     */
    Renderer() = default;

    /**
     * Initialize renderer.
     *
     * @param window
     */
    Renderer(PandaFramework *p_framework, WindowFramework *window) {
        this->p_framework = p_framework;
        this->window = window;
    }

    /**
     * Specify renderer requirements.
     *
     * @param p_framework Panda framework.
     * @param w_framework Window.
     */
     void specifyRendererRequirements(PandaFramework *p_framework, WindowFramework *window);

    /**
     * Render model.
     *
     * @param model Model to render.
     */
    void renderModel(Model model) const;

    /**
     * Load model.
     *
     * @param model_path Path to model.
     */
     Model loadModel(const std::string &model_path) const;
};

#endif
