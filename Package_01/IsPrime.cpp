//-------------------------判断一个数是否是素数--------------------------------
/**
#include<iostream>
using namespace std;
int main(){
    int n,flag;
    cin>>n;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<"n????????"<<endl;
    else
        cout<<"n??????"<<endl;
    return 0; 
} 
 **/

//-----------------------输出区间的所有素数-------------------------------

#include <iostream>
using namespace std;
int main()
{
    int low, high, flag;
    cin >> low >> high;
    while (low < high){
        flag = 0;
        for (int i = 2; i < low / 2; i++){
            if (low % i == 0){
                flag = 1;
                break;
            }
        }
        if(low>1){
            if (flag == 0){cout << low << " ";}
        }
        low++;
    }
    return 0;
}