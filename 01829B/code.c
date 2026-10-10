#include<stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for(int index=1; index<n; index++)
    {
        int count=0;
        scanf("%d", &a);
        int arr[a];
        for(int i=0; i<a; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==0) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}