#include<stdio.h>
int main()
{
    int t, a, b, n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d", &a, &b, &n);
        int count=0;
        while(a<=n && b<=n)
        {
            if(a>b) b+=a;
            else a+=b;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}