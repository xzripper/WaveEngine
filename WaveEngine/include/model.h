#ifndef WAVEENGINE_MODEL_H
#define WAVEENGINE_MODEL_H

#pragma once

#include <iostream>

#include "window.h"

#include "wtexture.h"

#include "../p3d/include/nodePath.h"
#include "../p3d/include/renderModeAttrib.h"

class Window;

class Model {
public:
    NodePath *model;

    /**
     * Initialize model.
     */
    Model() = default;

    /**
     * Initialize model.
     *
     * @param model Model.
     */
    explicit Model(NodePath &model) {
        this->model = new NodePath(model);
    }

    /**
     * Import model.
     *
     * @param model_path Model path.
     * @param window Window.
     */
    void importModel(const std::string &model_path, const Window &window);

    /**
     * Set model size.
     *
     * @param x Width.
     * @param y Height.
     * @param z Z.
     */
    void setSize(int x, int y, int z) const;

    /**
     * Add size to already existent model size.
     *
     * @param x Width.
     * @param y Height.
     * @param z Z.
     */
    void addSize(int x, int y, int z) const;

     /**
      * Set model position.
      *
      * @param x X.
      * @param y Y.
      * @param z Z.
      */
     void setPosition(int x, int y, int z) const;

     /**
      * Add coordinates to already existent model coordinates.
      *
      * @param x X.
      * @param y Y.
      * @param z Z.
      */
     void addPosition(int x, int y, int z) const;

     /**
      * Set model rotation.
      *
      * @param x X Rotation.
      * @param y Y Rotation.
      * @param z Z Rotation.
      */
     void setRotation(int x, int y, int z) const;

     /**
      * Add rotation to already existent model rotation.
      *
      * @param x X Rotation.
      * @param y Y Rotation.
      * @param z Z Rotation.
      */
     void addRotation(int x, int y, int z) const;

     /**
      * Set model texture.
      *
      * @param texture Texture.
      */
     void setTexture(WTexture texture) const;

     void normalizeTexture(const Window &window) const;

     /**
      * Enable/disable wireframe.
      */
      void wireframe() const;

    //accessModelPart
};

#endif
