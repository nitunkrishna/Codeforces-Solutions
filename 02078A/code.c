#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int index=1; index<=n; index++)
    {
        int a, b, sum=0;
        scanf("%d %d", &a, &b);
        int arr[a];
        for(int i=0; i<a; i++)
        {
            scanf("%d", &arr[i]);
            sum=sum + arr[i];
        }
        int avg=sum/a;
        if(avg==b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}