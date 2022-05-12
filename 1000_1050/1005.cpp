#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double c,F;
    cin>>F;
    c=5*(F-32)/9;
    cout<<fixed<<setprecision(2)<<"c="<<c;
    return 0;
}