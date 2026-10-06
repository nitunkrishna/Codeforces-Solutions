#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int moves = (x + 4) / 5; 
    printf("%d\n", moves);
    return 0;
}