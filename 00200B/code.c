#include <stdio.h>
int main()
{
    int n, pi;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &pi);
        sum+= pi;
    }
    printf("%.12lf\n", sum / n);
    return 0;
}
