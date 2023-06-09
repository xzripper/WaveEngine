#ifndef WAVEENGINE_SPHERE_H
#define WAVEENGINE_SPHERE_H

#pragma once

#include "primitive.h"

#include "../wavelog.h"

//class Sphere {
//public:
//    inline static Primitive primitive = *new Primitive("obj/sphere.obj");
//};

// Support for C++ versions that are lower than C++17.
// Consider using 'inline'.

const bool sphere_imp_warning = [] () {
    WaveLog::warning("Using Sphere will cost long render time because of Sphere smoothness, consider using UVSphere for faster rendering.", "sphere.h");

    return true;
}();

template<class _>
class Sphere {
public:
    static const Primitive primitive;
};

template<class DUMMY>
Primitive const Sphere<DUMMY>::primitive = *new Primitive("../WaveEngine/include/primitives/obj/sphere.obj");

#endif
