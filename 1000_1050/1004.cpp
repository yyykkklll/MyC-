#include<iostream>
using namespace std;
int fun(int n){
    if(n<4)
        return n;
    return fun(n-1)+fun(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}
