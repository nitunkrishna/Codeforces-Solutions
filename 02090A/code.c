#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, a, n=0;
        scanf("%d %d %d", &x, &y, &a);
        int i=1;
        while(n<=a)
        {
            if(i%2!=0) n+=x;
            else n+=y;
            i++;
        }
        if((i-1)%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}