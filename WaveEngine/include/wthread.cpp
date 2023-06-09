#include "wthread.h"

void WThread::run() {
    this->thread_.join();
}
