#include <stdio.h>
int main()
{
    int m, n, a, b, r, g;
    //����������m��n
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
    printf("HCF=%d\n", n);  //���Լ��
    printf("LCM=%d\n", g);  //��С������
    return 0;
}