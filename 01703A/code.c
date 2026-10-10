#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char arr[10];
        scanf("%s", arr);
        if ((arr[0] == 'Y' || arr[0] == 'y') && (arr[1] == 'E' || arr[1] == 'e') && (arr[2] == 'S' || arr[2] == 's') && arr[3] == '\0')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}