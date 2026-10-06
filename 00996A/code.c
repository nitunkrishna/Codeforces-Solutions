#include<stdio.h>
int main()
{
    int n, a, b, c, d, e, f, g, h;
    scanf("%d", &n);
    a=n/100;
    b=n%100;
    c=b/20;
    d=b%20;
    e=d/10;
    f=d%10;
    g=f/5;
    h=f%5;
    printf("%d\n", a+c+e+g+h);
    return 0;
}