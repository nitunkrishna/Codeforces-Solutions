#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k, a, b, x, y;
        int m, left, leftm;
        scanf("%d %d %d %d %d", &k, &a, &b, &x, &y);
        if(x>y)
        {
            m=(y*(b+k))/2;
            left= k-(m*y);
            if(a<left)
            {
                leftm=(x*left)/2;
            }
        }
        else
        {
            while(k>=a)
            {
                cnt++;
                k-=x;
            }
            while(k>=b)
            {
                cnt++;
                k-=y;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}