#ifndef WAVEENGINE_WCAMERA_H
#define WAVEENGINE_WCAMERA_H

#pragma once

#include "window.h"

#include "../p3d/include/nodePath.h"

class WCamera {
public:
    NodePath *camera;

    explicit WCamera(Window window) {
        this->camera = new NodePath(window.window->get_camera_group());
    }
};

#endif
