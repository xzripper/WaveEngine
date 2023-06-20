#include "wtexture.h"

void WTexture::setTextureMode(TextureModes mode) const {
    switch(mode) {
        case Modulate: this->texture_stage->set_mode(TextureStage::M_modulate);
        case Add: this->texture_stage->set_mode(TextureStage::M_add);
        case Decal: this->texture_stage->set_mode(TextureStage::M_decal);
        case Blend: this->texture_stage->set_mode(TextureStage::M_blend);
    }
}
