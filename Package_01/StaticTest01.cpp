#include<iostream>
using namespace std;
class Test{
    public:
        int a,b,c;
        static int sum;
    public:
        //���ع��캯�������������
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
//�����ʼ����̬��Ա
int Test::sum=0;
int main(){
    Test test1(1,2,3);
    test1.GetSum();
    Test test2(4,5,6);
    test2.GetSum();
    //���ʾ�̬���ݳ�Ա�ĵ�һ�ַ�ʽ  ������.���ݳ�Ա
    cout<<test1.sum<<endl;
    //���ʾ�̬���ݳ�Ա�ĵڶ��ַ�ʽ  �����������ݳ�Ա
    cout<<Test::sum<<endl;
    return 0;
}