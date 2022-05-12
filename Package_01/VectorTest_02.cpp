#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test(){
   
    vector<int> v;
   
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    while(v.end() != v.begin()){
        printf("%d", *v.begin());
        v.begin()++;
    }
    // cout<<*(v.begin()+2)<<endl;
}

int main(){
    test();
    return 0;
}