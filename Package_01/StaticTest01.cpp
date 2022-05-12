#include<iostream>
using namespace std;
class Test{
    public:
        int a,b,c;
        static int sum;
    public:
        //重载构造函数必须和类重名
        Test(int a,int b,int c){
            this->a = a;
            this->b = b;
            this->c = c;
            sum+=a+b+c;
        }
    public:
        void GetSum(){
            cout<<"sum="<<sum<<endl;
        }
};
//类外初始化静态成员
int Test::sum=0;
int main(){
    Test test1(1,2,3);
    test1.GetSum();
    Test test2(4,5,6);
    test2.GetSum();
    //访问静态数据成员的第一种方式  对象名.数据成员
    cout<<test1.sum<<endl;
    //访问静态数据成员的第二种方式  类名：：数据成员
    cout<<Test::sum<<endl;
    return 0;
}