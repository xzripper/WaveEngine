//#include "update.h"
//
//AsyncTask::DoneStatus _wrapperhandler(GenericAsyncTask *, void *_udata) {
//    auto _handler = static_cast<std::function<GenericAsyncTask::DoneStatus()> *>(_udata);
//
//    AsyncTask::DoneStatus _handler_return = (*_handler)();
//
//    return _handler_return;
//}
//
//class _AsyncTask : public GenericAsyncTask {
//public:
//    UpdateStatus (*target) ();
//
//    explicit _AsyncTask(UpdateStatus (*target) ()) : GenericAsyncTask("generic_async_task_wave_update") { this->target = target; }
//
//    virtual AsyncTask::DoneStatus run() {
//        UpdateStatus task_status = this->target();
//
//        if(task_status == UpdateStatus::STOP) {
//            return AsyncTask::DS_done;
//        } else {
//            return AsyncTask::DS_cont;
//        }
//    }
//};
//
//void Update::run(int delay) const {
//    _AsyncTask async_task(this->target);
//
////    if(delay > 0) {
////        _task->set_delay(delay);
////    }
//
////    this->task_ = *_task;
//
//    AsyncTaskManager::get_global_ptr()->add(&async_task);
//}
//
//void Update::stop() {
////    this->task_.remove();
//    std::cout << "Update::stop$not_implemented";
//}
