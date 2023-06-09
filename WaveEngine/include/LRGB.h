#ifndef UNTITLED4_LRGB_H
#define UNTITLED4_LRGB_H

#define DEFAULT_ALPHA 255 // Make changeable.

#pragma once

#include "../p3d/include/aa_luse.h"

class LRGB {
public:
    int r, g, b;

    /**
     * Create RGB color.
     *
     * @param r Red.
     * @param g Green.
     * @param b Blue.
     */
    LRGB(int r, int g, int b) {
        this->r = r / 255.0;
        this->g = g / 255.0;
        this->b = b / 255.0;
    }

    /**
     * Get RGB as LColor.
     */
    LColor getLColor() const;
};

#endif
