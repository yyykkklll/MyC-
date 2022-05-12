#include<iostream>
using namespace std;
class person{
    public:
        int a=10,b=10;
    
    //成员函数重载运算符  ---全区函数重载如此
    person operator+(person &p){
        person temp;
        temp.a=temp.a+p.a;
        temp.b=temp.b+p.b;
        return temp;
    }
};

void test(){
    person A,B,C;
    C=A+B;
    cout<<C.a<<endl;
    cout<<C.b<<endl;
}
int main(){
    cout<<"The test is beginning."<<endl;
    test();
    return 0;
}