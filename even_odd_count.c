#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    printf("Number of Array : ");
    scanf("%d", &n);
    int ara[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number Of Even = %d\nNumber Of Odd =%d\n", even, odd);
    return 0;
}