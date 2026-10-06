#include<stdio.h>
int main()
{
    int n, x, a, b;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        a=x%10;
        b=x/10;
        printf("%d\n", a+b);
    }
    return 0;
}