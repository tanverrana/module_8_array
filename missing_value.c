#include <stdio.h>
int main()
{
    int n, i, x;
    int ara[200001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        ara[i] = 0;
    }
    for (i = 1; i < n; i++)
    {
        scanf("%d", &x);
        ara[x] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (ara[i] == 0)
        {
            printf("Missing Value: %d\n", i);
        }
    }
    return 0;
}