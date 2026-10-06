#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &a, &b);
        c=a;
        if(c%b==0) printf("%d\n", c-a);
        else printf("%d\n", b - (a % b));
    }
    return 0;
}