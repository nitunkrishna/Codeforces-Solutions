#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int x=(abs(a-b)+9)/10;
        printf("%d\n", x);
    }
    return 0;
}