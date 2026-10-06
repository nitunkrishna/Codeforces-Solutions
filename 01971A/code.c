#include<stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x<y) printf("%d %d\n", x, y);
        else printf("%d %d\n", y, x);
    }
    return 0;
}