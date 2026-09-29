#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int index=1; index<=t; index++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int i, a=0, b=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==1) a++;
            else b++;
        }
        if(n%2!=0) printf("NO\n");
        else if(a%2==0 && b%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}