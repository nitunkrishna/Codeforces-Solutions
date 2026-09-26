#include<stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int cost= k*w*(w+1)/2;
    if(cost>n)
    printf("%d\n", (cost-n));
    else printf("0\n");
    return 0;
}