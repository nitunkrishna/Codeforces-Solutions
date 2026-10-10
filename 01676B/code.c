#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int index=1; index<=t; index++)
    {
        scanf("%d", &n);
        int arr[n], sum=0, min;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            sum+=arr[i];
        }
        min=arr[0];
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(min>arr[i]) min=arr[i];
            }
        }
        printf("%d\n", sum-(min*n));
    }
    return 0;
}