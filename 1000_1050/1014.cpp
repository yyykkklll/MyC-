// #include<iostream>
// using namespace std;
// int main(){
//     int n,s=1,Sn=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         s*=i;
//         Sn+=s;
//     }
//     cout<<Sn;
//     return 0;
// }

//ตÝน้
#include<iostream>
using namespace std;
int func(int i){
    if(1==i)
        return 1;
    else
        return i*func(i-1);
}
int main(){
    int n,sum=0;
    for(int i=1;i<=n;i++){
        sum +=func(i);
    }
    cout<<sum;
    return 0;
}