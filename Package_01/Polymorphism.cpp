#include <iostream>
using namespace std;
class Base
{
    /*
        定义抽象类：
        1.抽象类不能实例化对象
        2.抽象类的方法在子类中必须被实现
    */
    virtual void func() = 0;
};
class son : public Base
{
public:
    void func()
    {
        cout << "子类实现父类的方法" << endl;
    }
};
void test_func()
{
    son s;
    s.func();
}
int main()
{
    test_func();
    return 0;
}