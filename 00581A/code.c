#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int n=abs((a-b)/2);
    if(a<b) printf("%d %d\n", a, n);
    else printf("%d %d\n", b, n);
    return 0;
}