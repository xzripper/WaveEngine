#include "keyboard.h"

void Keyboard::onKey(void (*handler) (), const std::string &key, const Window &window) {
    static auto __hf = handler;

    window.p_framework->define_key(key, "on_key_" + key, [] (const Event *, void *_udata) { (( void (*) () ) _udata)(); }, handler);
}

void Keyboard::onKeyUp(void (*handler) (), const std::string &key, const Window &window) {
    static auto __hf = handler;

    window.p_framework->define_key(key + "-up", "on_key_up_" + key, [] (const Event *, void *_udata) { (( void (*) () ) _udata)(); }, handler);
}

void Keyboard::onKeyDown(void (*handler) (), const std::string &key, const Window &window) {
    static auto __hf = handler;

    window.p_framework->define_key(key + "-repeat", "on_key_repeat(down)_" + key, [] (const Event *, void *_udata) { (( void (*) () ) _udata)(); }, handler);
}
