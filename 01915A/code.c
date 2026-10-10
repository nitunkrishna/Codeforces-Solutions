#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a==b) printf("%d\n", c);
        else if(c==b) printf("%d\n", a);
        else printf("%d\n", b);
    }
    return 0;
}