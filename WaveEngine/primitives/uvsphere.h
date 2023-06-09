#ifndef WAVEENGINE_UVSPHERE_H
#define WAVEENGINE_UVSPHERE_H

#pragma once

#include "primitive.h"

//class UVSphere {
//public:
//    inline static Primitive primitive = *new Primitive("obj/uvsphere.obj");
//};

// Support for C++ versions that are lower than C++17.
// Consider using 'inline'.

template<class _>
class UVSphere {
public:
    static const Primitive primitive;
};

template<class DUMMY>
Primitive const UVSphere<DUMMY>::primitive = *new Primitive("../WaveEngine/include/primitives/obj/uvsphere.obj");

#endif
