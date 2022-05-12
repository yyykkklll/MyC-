#include<iostream>
using namespace std;
int main(){
    char c;
    int zimu=0,shuzi=0,kongge=0,other=0;
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            zimu++;
        }else if(c>='0'&&c<='9'){
            shuzi++;
        }else if(c==' '){
            kongge++;
        }else
            other++; 
    }
    printf("%d %d %d %d",zimu,shuzi,kongge,other);
    return 0;
}