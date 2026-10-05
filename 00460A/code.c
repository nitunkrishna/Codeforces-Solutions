#include<stdio.h>
int main()
{
    int n, m, d=0;
    scanf("%d %d", &n, &m);
    while(n>0)
    {
        d++;
        n--;
        if(d%m==0) n++;
    }
    printf("%d\n", d);
    return 0;
}