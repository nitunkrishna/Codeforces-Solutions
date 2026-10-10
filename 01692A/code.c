#include<stdio.h>
int main()
{
    int t, a, b, c, d;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int count=0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        printf("%d\n", count);
    }
    return 0;
}