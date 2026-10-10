#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<=1399) printf("Division 4\n");
        else if(arr[i]>=1400 && arr[i]<=1599) printf("Division 3\n");
        else if(arr[i]>=1600 && arr[i]<=1899) printf("Division 2\n");
        else printf("Division 1\n");
    }
    return 0;
}