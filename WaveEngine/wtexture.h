#ifndef WAVEENGINE_WTEXTURE_H
#define WAVEENGINE_WTEXTURE_H

#pragma once

#include <iostream>

#include "../p3d/include/texturePool.h"
#include "../p3d/include/texture.h"

class WTexture {
public:
    Texture *wtexture;

    /**
     * Load new texture.
     *
     * @param texture_path Path to texture.
     */
    explicit WTexture(const std::string &texture_path) {
        this->wtexture = TexturePool::load_texture(texture_path);
    }

    /**
     * Get texture.
     */
     Texture* get_texture() const { return this->wtexture; }
};

#endif
