#include <iostream>
using namespace std;
class Base
{
    /*
        ��������ࣺ
        1.�����಻��ʵ��������
        2.������ķ����������б��뱻ʵ��
    */
    virtual void func() = 0;
};
class son : public Base
{
public:
    void func()
    {
        cout << "����ʵ�ָ���ķ���" << endl;
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