#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
using namespace std;
void MyPrint(int ivl){
    cout<<ivl<<" ";
}
int main(){
    vector<int> v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }

    cout<<*v1.begin()+3;
    // cout<<"��ʼ��:"<<endl;
    // for_each(v1.begin(),v1.end(),MyPrint);
    // cout<<endl;
    
    // //����
    // cout<<"��С����:"<<endl;
    // sort(v1.begin(),v1.end());
    // for_each(v1.begin(),v1.end(),MyPrint);
    // cout<<endl;
    // cout<<"�Ӵ�С:"<<endl;
    // reverse(v1.begin(),v1.end());
    // for_each(v1.begin(),v1.end(),MyPrint);
    // cout<<endl;

    // //���� ��һ��λ�ò���Ԫ��
    // cout<<"new list:"<<endl;
    // v1.insert(v1.begin()+3,110);
    // for_each(v1.begin(),v1.end(),MyPrint);
    // cout<<endl;

    // //ɾ��ָ��Ԫ��
    // cout<<"new:"<<endl;
    // v1.erase(v1.begin()+3);
    // for_each(v1.begin(),v1.end(),MyPrint);

    return 0;
}