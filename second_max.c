#include <stdio.h>
int main()
{
    int n, pos, pos2;
    printf("Size of Array:");
    scanf("%d", &n);
    int ara[n];
    int max = ara[0];
    int max2 = max;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        if (ara[i] > max)
        {
            max = ara[i];
            pos = i;
            {
                max2 = ara[i];
                pos2 = i;
            }
        }
        else if (ara[i] < max && ara[i] > max2)
        {
            max2 = ara[i];
            pos2 = i;
        }
    }
    printf("Maximum value ara[%d]= %d\n", pos, max);
    printf("Second Maximum value ara[%d]= %d\n", pos2, max2);
    return 0;
}