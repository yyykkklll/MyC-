//
// Created by ilc_yan on 2021/12/14/0014.
//
#include<iostream>
#include<thread>
using namespace std;
bool is_exit = false;
void ThreadTest(){
    cout<<"SubThreadTest Id:"<<this_thread::get_id()<<endl;
    cout << "begin SubThreadTest" << endl;
    for(int i=0; i<10; i++){
        if(!is_exit){
            break;
        }
        cout<<"in thread "<<i<<endl;
        this_thread::sleep_for(1s);
    }
    cout<<"end SubThreadTest"<<endl;
}
int main(){
//    {
//        thread test_02(ThreadTest);
//        test_02.detach(); //主子线程分离 注意：主线程退出后，子线程不一定推出
//    }

    cout<<"MainThreadTest Id:"<<this_thread::get_id()<<endl;
    {
        thread test_01(ThreadTest);
        cout<<"通知子线程退出"<<endl;
        is_exit=true; //通知子线程退出
        cout<<"主线程阻塞 等待子线程退出"<<endl;
        test_01.join();
        cout<<"线程已退出"<<endl;
    }

//    cout<<"MainThreadTest Id:"<<this_thread::get_id()<<endl;
//    thread test(ThreadTest);  //创建线程对象
//    cout << "begin MainThreadTest" << endl;
//    test.join(); //等待子线程结束
//    cout<<"SubThreadTest end" << endl;
    return 0;
}
