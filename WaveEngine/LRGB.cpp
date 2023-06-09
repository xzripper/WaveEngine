#include "LRGB.h"

LColor LRGB::getLColor() const {
    return {static_cast<float>(this->r), static_cast<float>(this->g), static_cast<float>(this->b), DEFAULT_ALPHA};
}
