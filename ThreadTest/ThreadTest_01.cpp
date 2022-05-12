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
//        test_02.detach(); //�����̷߳��� ע�⣺���߳��˳������̲߳�һ���Ƴ�
//    }

    cout<<"MainThreadTest Id:"<<this_thread::get_id()<<endl;
    {
        thread test_01(ThreadTest);
        cout<<"֪ͨ���߳��˳�"<<endl;
        is_exit=true; //֪ͨ���߳��˳�
        cout<<"���߳����� �ȴ����߳��˳�"<<endl;
        test_01.join();
        cout<<"�߳����˳�"<<endl;
    }

//    cout<<"MainThreadTest Id:"<<this_thread::get_id()<<endl;
//    thread test(ThreadTest);  //�����̶߳���
//    cout << "begin MainThreadTest" << endl;
//    test.join(); //�ȴ����߳̽���
//    cout<<"SubThreadTest end" << endl;
    return 0;
}
