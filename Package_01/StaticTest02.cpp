#include <iostream>
using namespace std;
class Myclass
{
public:
    Myclass(int a,int b,int c);
    static void GetSum();//������̬��Ա����
private:
    int a,b,c;
    static int Sum;//������̬���ݳ�Ա
};
int Myclass::Sum=0;//���岢��ʼ����̬���ݳ�Ա

Myclass::Myclass(int a,int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
    Sum+=a+b+c; //�Ǿ�̬��Ա�������Է��ʾ�̬���ݳ�Ա
}

void Myclass::GetSum() //��̬��Ա������ʵ��
{
    // cout<<a<<endl; //������룬a�ǷǾ�̬���ݳ�Ա
    //��̬��Ա�������ܷ��ʷǾ�̬�����ݳ�Ա�ͺ���
    cout<<"Sum="<<Sum<<endl;
}

int main()
{
    Myclass M(1,2,3);
    M.GetSum();
    Myclass N(4,5,6);
    N.GetSum();
    Myclass::GetSum();
    return 0;
}