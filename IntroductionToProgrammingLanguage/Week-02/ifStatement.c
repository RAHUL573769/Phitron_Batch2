#include <stdio.h>

int main()
{
    int x;
    printf("Please Enter Input");

    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("%d is an even Number", x);
    }
    else
    {
        printf("%d is an odd Number", x);
    }
    return 0;
}