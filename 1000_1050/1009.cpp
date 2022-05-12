#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, a, b, c, d, e;
    //输入一个整数
	//printf("Please enter number: ");
    scanf("%d", &x);
    //以下是判断整数是否多于5位，多于判断出错，重新输入
    // while (x < 0 || x > 99999){
    //     printf("Error! Retry!\nPlease enter number: ");
    //     scanf("%d", &x);
    // }
    //以下判断出该数是几位数
    a = x / 10000;
    b = x / 1000;
    c = x / 100;
	d = x / 10;
    e = x - d * 10;
    if (a >= 1 && a <= 9){
        printf("5\n");
        printf("%d %d %d %d %d\n", a, b-a*10, c-b*10, d-c*10, e);
        printf("%d%d%d%d%d\n", e, d-c*10, c-b*10, b-a*10, a);
    }
    else if (b >= 1 && b <= 9){
        printf("4\n");
        printf("%d %d %d %d\n", b, c-b*10, d-c*10, e);
        printf("%d%d%d%d\n", e, d-c*10, c-b*10, b);
    }
    else if (c >= 1 && c <= 9){
        printf("3\n");
        printf("%d %d %d\n", c, d-c*10, e);
        printf("%d%d%d\n", e, d-c*10, c);
    }
	else if (d >= 1 && d <= 9){
		printf("2\n");
        printf("%d %d\n", d, e);
        printf("%d%d\n", e, d);
	}
    else{
        printf("1\n");
        printf("%d\n", x);
    }
    // system("pause");
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// 	string number;
// 	int len;
// 	cin>>number;
// 	len=number.length();
// 	cout<<len<<endl;
// 	cout<<number <<endl;
// 	string re_number(number.rbegin(), number.rend());
// 	cout<<re_number<<endl;
// 	system("pause");
// 	return 0;
// }
