#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d", &n);
        int j, p, sum=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d", &p);
            if(j%2==0) sum+=p;
            else sum-=p;
        }
        printf("%d\n", sum);
    }
    return 0;
}