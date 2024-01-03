#include <stdio.h>

int main()
{

    int weight;
    printf("Enter the Weight of Water melon");
    scanf("%d", &weight);
    // conditon =weight%2==0

    if (weight % 2 == 0)
    {

        printf("Possible");
    }

    else if (weight == 2)
    {

        printf("Im-Possible");
    }
    else
    {
        printf("Im-Possible");
    }
    return 0;
}