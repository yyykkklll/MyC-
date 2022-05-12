//
// Created by ilc_yan on 2021/12/23/0023.
//
#include<iostream>
#include "MyThread.h"
using namespace std;
//class Xthread{
//    public:
//        virtual void StartThread(){
//            is_exit_=false;
//            TestThread=thread(&Xthread::MainTest,this);
//        }
//        virtual void WaitThread(){
//            if(TestThread.joinable())
//                TestThread.join();
//        }
//        virtual void StopThread(){
//            is_exit_=true;
//            WaitThread();
//        }
//        bool IsExitThread(){return is_exit_;}
//    private:
//        virtual void MainTest()=0;
//        thread TestThread;
//        bool is_exit_=false;
//};
//
//class TestThread :public Xthread{
//    public:
//    void MainTest(){
//        cout << "TestThread is begin" <<endl;
//        while(!IsExitThread){
//            this_thread::sleep_for(300ms);
//            cout<<"。"<<flush;
//        }
//        cout<<endl;
//        cout<<"TestThread is end" <<endl;
//    }
//};
Xthread::StartThread(){
    is_exit_=false;
    TestThread=thread(&Xthread::MainTest,this);
}
Xthread::WaitThread(){
    if(TestThread.joinable())
    TestThread.join();
}
Xthread::StopThread(){
    is_exit_=true;
    WaitThread();
}
Xthread::IsExitThread(){
    return is_exit_;
}
TestThread::MainTest(){
    cout << "TestThread is begin" <<endl;
        while(!IsExitThread()){
            this_thread::sleep_for(300ms);
            cout<<"。"<<flush;
        }
        cout<<endl;
        cout<<"TestThread is end" <<endl;
}

