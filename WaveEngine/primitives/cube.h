#ifndef WAVEENGINE_CUBE_H
#define WAVEENGINE_CUBE_H

#pragma once

#include "primitive.h"

#include <iostream>

//class Cube {
//public:
//    inline static const Primitive primitive = *new Primitive("obj/cube.obj");
//};

// Support for C++ versions that are lower than C++17.
// Consider using 'inline'.

template<class _>
class Cube {
public:
    static const Primitive primitive;
};

template<class DUMMY>
Primitive const Cube<DUMMY>::primitive = *new Primitive("../WaveEngine/include/primitives/obj/cube.obj");

#endif
