#include<stdio.h>
int main()
{
    int arr[4], i, cnt=0;
    for(i=0; i<4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<4; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}