#ifndef WAVEENGINE_KEYBOARD_H
#define WAVEENGINE_KEYBOARD_H

#include "window.h"

#include "../p3d/include/event.h"

class Keyboard {
public:
    /**
     * Call handler (first argument) on key.
     *
     * @param key Key.
     * @param window Window.
     */
    static void onKey(void (*) (), const std::string &key, const Window &window);

    /**
     * Call handler (first argument) on key up.
     *
     * @param key Key.
     * @param window Window.
     */
    static void onKeyUp(void (*) (), const std::string &key, const Window &window);

    /**
     * Call handler (first argument) on key down.
     *
     * @param key Key.
     * @param window Window.
     */
    static void onKeyDown(void (*) (), const std::string &key, const Window &window);
};

#endif
