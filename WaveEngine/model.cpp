#include "model.h"

#include "LRGB.h"

void Model::importModel(const std::string &model_path, const Window &window) {
    this->model = window.renderer->loadModel(model_path).model;
}

void Model::setSize(int x, int y, int z) const {
    this->model->set_scale(LVecBase3(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z)));
}

void Model::addSize(int x, int y, int z) const {
    this->model->set_scale(
        LVecBase3(
            static_cast<float>(this->model->get_sx() + static_cast<float>(x)),
            static_cast<float>(this->model->get_sy() + static_cast<float>(y)),
            static_cast<float>(this->model->get_sz() + static_cast<float>(z))
        )
    );
}

void Model::setPosition(int x, int y, int z) const {
    this->model->set_pos(LVecBase3(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z)));
}

void Model::addPosition(int x, int y, int z) const {
    this->model->set_pos(
        LVecBase3(
            static_cast<float>(this->model->get_x() + static_cast<float>(x)),
            static_cast<float>(this->model->get_y() + static_cast<float>(y)),
            static_cast<float>(this->model->get_z() + static_cast<float>(z))
        )
    );
}

void Model::setRotation(int x, int y, int z) const {
    this->model->set_hpr(LVecBase3(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z)));
}

void Model::addRotation(int x, int y, int z) const {
    this->model->set_hpr(
        LVecBase3(
            static_cast<float>(this->model->get_h() + static_cast<float>(x)),
            static_cast<float>(this->model->get_p() + static_cast<float>(y)),
            static_cast<float>(this->model->get_r() + static_cast<float>(z))
        )
    );
}

void Model::setTexture(WTexture texture) const {
    this->model->set_texture(texture.get_texture(), 1);
}

void Model::wireframe() const {
    if(this->model->get_render_mode() == RenderModeAttrib::M_unchanged) {
        this->model->set_render_mode_filled_wireframe(LRGB(255, 255, 0).getLColor());
        this->model->set_render_mode_thickness(10);
    } else {
        this->model->set_render_mode(RenderModeAttrib::M_unchanged, 1);
    }
}
