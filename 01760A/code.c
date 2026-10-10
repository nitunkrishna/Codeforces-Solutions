#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if((b>a)&&(b<c)) printf("%d\n", b);
        else if((b>c)&&(b<a)) printf("%d\n", b);
        else if((a>b)&&(a<c)) printf("%d\n", a);
        else if((a>c)&&(a<b)) printf("%d\n", a);
        else if((c>a)&&(c<b)) printf("%d\n", c);
        else printf("%d\n", c);
    }
    return 0;
}