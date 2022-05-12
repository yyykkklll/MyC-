#include<iostream>
using namespace std;
int main(){
    int n,sn=0,t=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        t=t*10;
        t=t+2;
        sn=sn+t;
    }
    cout<<sn;
    return 0;
}