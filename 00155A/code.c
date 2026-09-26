#include <stdio.h>
int main()
{
    int n, count=0;  
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int best = arr[0], worst = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i] > best)
        {
            best = arr[i];
            count++;
        }
        else if (arr[i] < worst)
        {
            worst = arr[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}