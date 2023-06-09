#ifndef WAVEENGINE_WTHREAD_H
#define WAVEENGINE_WTHREAD_H

#pragma once

#include <iostream>
#include <thread>

class WThread {
public:
    std::thread thread_;

    /**
     * Wave Thread.
     *
     * @param thread_target Thread target.
     */
    explicit WThread(void (*thread_target) ()) {
        this->thread_ = std::thread(thread_target);
    }

    /**
     * Run thread.
     */
    void run();
};

#endif
