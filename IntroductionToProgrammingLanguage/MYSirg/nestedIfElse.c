#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter the Three Numbers");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
    }

    else
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }

    getch();
}