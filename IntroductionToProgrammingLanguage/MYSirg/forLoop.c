#include <stdio.h>

int main()
{

    int n, i;
    printf("Enter The Value of N");

    scanf("%d", &n);

    i = n;
    while (i >= 1)
    {

        printf("%d \n", i);
        i--;
    }

    return 0;
}