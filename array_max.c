#include <stdio.h>
int main()
{
    int n, pos;
    printf("Size of Array:");
    scanf("%d", &n);
    int ara[n];
    int max = ara[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        if (ara[i] > max)
        {
            max = ara[i];
            pos = i;
        }
    }
    printf("Maximum value ara[%d]= %d\n", pos, max);
    return 0;
}