//
// Created by ilc_yan on 2021/12/23/0023.
//
#include<iostream>
#include<thread>
using namespace std;
class RunTest{
    public:
        void run(){
            cout<<"name:"<<name<<endl;
            cout<<"age:"<<age<<endl;
        }
    public:
        string name;
        int age;
};
int main(){
    RunTest test_01;
    test_01.name = "hello world";
    test_01.age = 19;
    thread MyThread(&RunTest::run,&test_01);
    MyThread.join();
    return 0;
}