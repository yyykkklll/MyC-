// ����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 
// 90���Լ�90������ΪA��80-89��ΪB��70-79��ΪC��60-69��ΪD��60������ΪE��
// #include<iostream>
// using namespace std;
// int main(){
//     int score=0;
//     cin>>score;
//     if(score>=90){
//         cout<<'A';
//     }else if(score>=80&&score<=89){
//         cout<<'B';
//     }else if(score>=70&&score<=79){
//         cout<<'C';
//     }else if(score>=60&&score<=69){
//         cout<<'D';
//     }else
//         cout<<'E';
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int score;
    cin>>score;
    switch(score/10){
        case 9:
            cout<<'A';
            break;
        case 8:
            cout<<'B';
            break;
        case 7:
            cout<<'C';
            break;
        case 6:
            cout<<'D';
            break;
        default:
            cout<<'E'; 
            break;
    }
    return 0;
}