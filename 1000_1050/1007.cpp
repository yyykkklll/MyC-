#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    if(x<1){
        y=x;
        cout<<y;
    }else if(1<=x&&x<10){
        y=2*x-1;
        cout<<y;
    }else{
        y=3*x-11;
        cout<<y;
    }
    return 0;
}