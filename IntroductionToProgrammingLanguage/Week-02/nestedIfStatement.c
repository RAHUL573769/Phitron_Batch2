#include <stdio.h>

int main()
{
    int x, y;
    printf("Please Enter Input");

    scanf("%d", &x);
    printf("Please Enter Second Input");

    scanf("%d", &y);
    if (x > y)
    {
        printf("%d is a Greater Number", x);
    }
    else if (x < y)
    {
        printf("%d is a Greater Number", y);
    }
    else
    {
        printf(" is an Egual Number");
    }

    return 0;
}