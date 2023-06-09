#ifndef WAVEENGINE_PRIMITIVE_H
#define WAVEENGINE_PRIMITIVE_H

#pragma once

#include <iostream>

#include <utility>

#include "../window.h"

#include "../model.h"

#include "../../p3d/include/pandaFramework.h"

class Primitive {
public:
    std::string primitive_path;

    /**
     * Create new primitive.
     *
     * @param primitive_path Path to primitive model.
     */
    explicit Primitive(std::string primitive_path) {
        this->primitive_path = std::move(primitive_path);
    }

    Model getPrimitive(const Window &window) const;
};

#endif
