#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int a;
        scanf("%d", &a);
        if(a>101 && a<110) printf("YES\n");
        else if(a>109 && a<1010) printf("NO\n");
        else if(a>=1010 && a<=1099) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}