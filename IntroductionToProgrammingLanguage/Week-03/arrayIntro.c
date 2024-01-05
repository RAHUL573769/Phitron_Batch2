#include <stdio.h>

int main()
{

    int array[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d \n", &array[i]);
    }
    printf("The elements are");

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", array[i]);
    }

    return 0;
}