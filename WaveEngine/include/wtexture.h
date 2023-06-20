#ifndef WAVEENGINE_WTEXTURE_H
#define WAVEENGINE_WTEXTURE_H

#pragma once

#include <iostream>

#include "../p3d/include/textureStage.h"
#include "../p3d/include/texturePool.h"
#include "../p3d/include/texture.h"

enum TextureModes { Modulate, Add, Decal, Blend };

class WTexture {
public:
    Texture *wtexture;
    TextureStage *texture_stage = new TextureStage("wtexture_texture_stage");

    /**
     * Load new texture.
     *
     * @param texture_path Path to texture.
     */
    explicit WTexture(const std::string &texture_path) {
        this->wtexture = TexturePool::load_texture(texture_path);
    }

    /**
     * Set texture mode.
     *
     * @param mode Texture mode.
     */
    void setTextureMode(TextureModes mode) const;

    /**
     * Get texture.
     */
     Texture* getTexture() const { return this->wtexture; }
};

#endif
