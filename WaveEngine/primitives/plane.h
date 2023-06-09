#ifndef WAVEENGINE_PLANE_H
#define WAVEENGINE_PLANE_H

#pragma once

#include "primitive.h"

//class Plane {
//public:
//    inline static Primitive primitive = *new Primitive("obj/plane.obj");
//};

// Support for C++ versions that are lower than C++17.
// Consider using 'inline'.

template<class _>
class Plane {
public:
    static const Primitive primitive;
};

template<class DUMMY>
Primitive const Plane<DUMMY>::primitive = *new Primitive("../WaveEngine/include/primitives/obj/plane.obj");

#endif
