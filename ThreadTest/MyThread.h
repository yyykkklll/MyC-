//
// Created by ilc_yan on 2021/12/23/0023.
//
#include<thread>
#ifndef C__PROJECT_MYTHREAD_H
#define C__PROJECT_MYTHREAD_H
class Xthread{
    public:
        virtual void StartThread();
        virtual void WaitThread();
        virtual void StopThread();
        bool IsExitThread();
    private:
        virtual void MainTest()=0;
        thread TestThread;
        bool is_exit_=false;
};

class TestThread{
    public:
        void MainTest();
};
#endif //C__PROJECT_MYTHREAD_H
