//#ifndef WAVEENGINE_UPDATE_H
//#define WAVEENGINE_UPDATE_H
//
//#pragma once
//
//#include "../p3d/include/asyncTaskManager.h"
//#include "../p3d/include/genericAsyncTask.h"
//
//enum UpdateStatus { CONTINUE = 1, STOP = -1 };
//
//class Update {
//public:
//    UpdateStatus (*target) ();
//
////    GenericAsyncTask task_;
//
//    /**
//     * Update - similar to timer.
//     *
//     * @param target Target.
//     */
//    explicit Update(UpdateStatus (*target) ()) {
//        this->target = target;
//    }
//
//    /**
//     * Run update.
//     */
//    void run(int delay) const;
//
//    /**
//     * Stop update.
//     */
//    void stop();
//};
//
//#endif
