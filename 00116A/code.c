#include<stdio.h>
int main()
{
    int n, l, e, x=0, max=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &l, &e);
        x+=e-l;
        if(x>max) max=x;
    }
    printf("%d\n", max);
    return 0;
}