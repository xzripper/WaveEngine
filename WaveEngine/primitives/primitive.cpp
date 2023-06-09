#include "primitive.h"

Model Primitive::getPrimitive(const Window &window) const {
    return window.renderer->loadModel(this->primitive_path);
}
