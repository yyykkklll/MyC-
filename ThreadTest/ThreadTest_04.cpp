//
// Created by ilc_yan on 2021/12/23/0023.
//
#include "MyThread.h"
int main(){
    TestThread test_01;
    test_01.StartThread();
    this_thread::sleep_for(5s);
    test_01.StopThread();
    return 0;
}