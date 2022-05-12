#include <iostream>
#include <fstream>
using namespace std;
class Person{
    public:
    char name[1024];
    int age;
};
int main(){

    //д��
    fstream ofs("test_02.txt",ios::out | ios::binary);
    Person p={"ykl",18};
    ofs.write((const char*)&p,sizeof(Person));
    ofs.close();
    
    //��ȡ
    ifstream ifs("test_02.txt",ios::in | ios::binary);
    if(!ifs.is_open()){
        cout<<"�ļ���ȡʧ�ܣ�"<<endl;
        return 0;
    }
    ifs.read((char*)&p,sizeof(Person));
    printf("%s %d",p.name,p.age);
    ifs.close();
    return 0;
}