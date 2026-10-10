#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int num = arr[i];
        int x=0, y=0;
        for(int j=0; j<6; j++)
        {
            int dig= num%10;
            num/= 10;
            if (j< 3)
                 x+= dig;
            else
                y+= dig;
        }
        if(x==y)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}