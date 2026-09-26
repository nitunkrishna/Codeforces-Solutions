#include<stdio.h>
int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    for(int i=n+1; ; i++)
    {
        int x=i;
        a=x%10;
        x=x/10;
        b=x%10;
        x=x/10;
        c=x%10;
        x=x/10;
        d=x%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}