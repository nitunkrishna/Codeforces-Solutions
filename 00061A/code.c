#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=0, j=0; ; i++, j++)
    {
        if(a[i]==0 && b[j]==1) printf("1");
        else if(a[i]==1 && b[j]==0) printf("1");
        else printf("0");
    }
    printf("\n");
    return 0;
}