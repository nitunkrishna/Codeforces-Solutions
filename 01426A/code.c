//Not solved yet
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int n, x, cnt=0;
        scanf("%d %d", &n ,&x);
        for(int j=1; ; j+=x)
        {
            if(j<=n) break;
            else cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}