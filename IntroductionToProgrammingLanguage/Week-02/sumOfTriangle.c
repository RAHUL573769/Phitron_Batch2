#include <stdio.h>

int main()
{

    int side1, side2, side3, sumOfTwoSides;

    scanf("%d %d %d", &side1, &side2, &side3);

    sumOfTwoSides = side1 + side2;

    if (sumOfTwoSides > side3)
    {

        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
