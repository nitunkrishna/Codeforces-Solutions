#include<stdio.h>
int main()
{
    int a, b, n=1;
    scanf("%d %d", &a, &b);
    if(a<b)
    {
        x: a=a*3;
           b=b*2;
        if(a<=b)
        {
            n++;
            goto x;
        }
    }
    printf("%d\n", n);
    return 0;
}