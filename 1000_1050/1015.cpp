//
// Created by ilc_yan on 2021/12/10/0010.
//

#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0, c = 0, s1 = 1, s2 = 1;
    float s3 = 1, s;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++) {
        s1 += i;
    }
    for (int i = 1; i <= b; i++) {
        s2 += i * i;
    }
    for (float i = 1; i <= c; i++) {
        s3 += 1/ i;
    }
    //cout<<s3<<endl;
    s=s1+s2+s3;
    printf("%.2f",s);
    return 0;
}