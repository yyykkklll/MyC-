#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MyPrint(int ivl){
    cout<<ivl<<endl;
}

void test(){

    //������һ��vector���� ����
    vector<int> v;
    //β������
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //ͨ�����������������е�����
    vector<int>::iterator iebegin = v.begin();
    vector<int>::iterator ieend = v.end();
    while(iebegin != ieend){
        printf("%d\n", *iebegin);
        iebegin++;
    }

    //STL�ṩ�ı����㷨
    for_each(v.begin(),v.end(),MyPrint);
    //����
    // while(v.end() != v.begin()){
    //     printf("%d\n", *v.begin());
    //     v.begin()++;
    // }

    
}
int main(){
    test();
    return 0;
}