#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MyPrint(int ivl){
    cout<<ivl<<endl;
}

void test(){

    //创建了一个vector容器 数组
    vector<int> v;
    //尾插数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问容器中的数据
    vector<int>::iterator iebegin = v.begin();
    vector<int>::iterator ieend = v.end();
    while(iebegin != ieend){
        printf("%d\n", *iebegin);
        iebegin++;
    }

    //STL提供的遍历算法
    for_each(v.begin(),v.end(),MyPrint);
    //错误
    // while(v.end() != v.begin()){
    //     printf("%d\n", *v.begin());
    //     v.begin()++;
    // }

    
}
int main(){
    test();
    return 0;
}