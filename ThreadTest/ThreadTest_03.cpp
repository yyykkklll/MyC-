//
// Created by ilc_yan on 2021/12/23/0023.
//
#include<iostream>
#include<thread>
using namespace std;
class Xthread{
    public:
        virtual void StartThread(){
            is_exit_=false;
            TestThread=thread(&Xthread::MainTest,this);
        }

        virtual void WaitThread(){
            if(TestThread.joinable())
                TestThread.join();
        }

        virtual void StopThread(){
            is_exit_=true;
            WaitThread();
        }
        bool is_exit(){ return is_exit_; }
    private:
        virtual void MainTest()=0;
        thread TestThread;
        bool is_exit_=false;
};

class TestThread : public Xthread{
    public:
        void MainTest() override{
            cout << "TestThread is begin" <<endl;
            while(!is_exit()){
                this_thread::sleep_for(200ms);
                cout << "¡£"<<flush;
            }
            cout << endl;
            cout << "TestThread is end" <<endl;
        }
    public:
        string name;
};
int main(){
    TestThread testth;
    testth.name = "hello world";
    testth.StartThread();
    this_thread::sleep_for(10s);
    testth.StopThread();
    return 0;
}