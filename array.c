#include <stdio.h>
int main()
{
    int ara[10];
    ara[0] = 3456;
    ara[1] = 3434;
    ara[2] = ara[0] - ara[1];
    printf("%d\n", ara[0]);
    printf("%d\n", ara[1]);
    printf("%d\n", ara[2]);
    printf("%d\n", ara[3]);
    return 0;
}