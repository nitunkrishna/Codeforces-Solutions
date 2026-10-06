#include<stdio.h>
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int arr[n];
    int w=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<=h) w+=1;
        else w+=2;
    }
    printf("%d\n", w);
    return 0;
}