#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
/*
    1.任意2~36进制数转化为10进制数
    m是要转换成的进制，sum是给定的m进制下的字符串
    结果为int型
*/
int bitary_01(int m, string sum){
    int ans = 0;
    for(int i = 0; i < sum.length(); i++){
        if(sum[i]>='0' && sum[i]<='9')
            ans=ans*m+sum[i]-'0';
        else
            ans=ans*m+sum[i]-'A'+10;
    }
    return ans;
}
/*
    1、自定义进制转换函数：
        n是待转换的十进制数，m是待转换成的进制数 
*/
string bitary_02(int n,int  m){
    string ans="";
    do{
        int t=n%m;
        if(t>=0 && t<=9)
            ans+=(t+'0');
        else
            ans+=(t+'a'-10);
        n/=m;
    }while(n);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    char buf[1024];
    cin>>buf;
    int ans_end_01=bitary_01(16,buf);
    string ans_end_02=bitary_02(8,2);
    cout<<ans_end_01<<endl;
    cout<<ans_end_02<<endl;
    return 0; 
}