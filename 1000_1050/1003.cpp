#include<iostream>
using namespace std;
int main(void){
    char a[5]={'C','h','i','n','a'}; //定义数组
    for(int i;i<5;i++){
        a[i]+=4;
        cout<<a[i];
    }
    return 0;
}

