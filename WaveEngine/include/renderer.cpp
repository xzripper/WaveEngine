#include "renderer.h"

#include "wavelog.h"

void Renderer::renderModel(Model model) const {
    model.model->reparent_to(this->window->get_render());
}

Model Renderer::loadModel(const std::string &model_path) const {
    NodePath loaded_model = this->window->load_model(this->p_framework->get_models(), model_path);

    if(loaded_model.get_error_type() == loaded_model.ET_fail) {
        WaveLog::error("Unable to load model.", "renderer.cpp");

        return {};
    } else {
        return Model(loaded_model);
    }
}
