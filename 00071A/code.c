#include <stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d", &a);
    while(a--)
    {
    char arr[101];
    scanf("%s", arr);
    int n= strlen(arr); 
    if(n<=10) printf("%s", arr);
    else printf("%c%d%c\n", arr[0], n-2, arr[n-1]);
    }
    return 0;
}