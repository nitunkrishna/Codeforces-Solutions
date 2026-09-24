#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int k;
        scanf("%d", &k);
        if(k%3==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}