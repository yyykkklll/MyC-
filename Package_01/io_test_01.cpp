//  写入--------------------------------------------------------------
// #include <fstream>
// using namespace std;
// int main(){
//     ofstream ofs;
//     ofs.open("test.txt",ios::out);
//     ofs<<"this is a test file"<<endl;
//     ofs.close();
//     return 0;
// }


// 读取--------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if(!ifs.is_open())
        cout<<"文件打开失败！"<<endl;

    //第一种读取
    // char buf_01[1024]={0};
    // while(ifs>>buf_01){
    //     cout<<buf_01;
    // }
    //第二种读取
    char buf_02[1024]={0};
    while(ifs.getline(buf_02, 1024)){
        cout<<buf_02<<endl;
    }
    //三种读取
    string buf_03;
    while(getline(ifs,buf_03)){
        cout<<buf_03<<endl;
    } 
    //第四种读取
    // char c;
    // while((c=ifs.get()) != EOF){
    //     cout<<c;
    // }
    ifs.close();
    return 0;
}