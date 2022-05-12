#include<iostream>
#include<string>
using namespace std;

class Building
{
    friend void test();
public:
    /* data */
    string settingroom;
private:    
    string livingroom;
public:
    Building(string settingroom,string livingroom){
        this->livingroom=livingroom;
        this->settingroom=settingroom;
    }
};

void test(){
    Building building("¿ÍÌü","ÎÔÊÒ");
    cout<<building.settingroom<<endl;
    cout<<building.livingroom<<endl;
}

int main(){
    test();
    return 0;
}