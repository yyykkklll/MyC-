#include <stdio.h>
int main()
{
    int m, n, a, b, r, g;
    //输入正整数m和n
    printf("Please enter m & n: ");
    scanf("%d %d", &m, &n);
    a = m;
    b = n;
    r = m % n;
    while (r != 0){
        m = n;
        n = r;
        r = m % n;
    }
    g = a * b / n;
    printf("HCF=%d\n", n);  //最大公约数
    printf("LCM=%d\n", g);  //最小公倍数
    return 0;
}