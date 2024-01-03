#include <stdio.h>

int main()
{

    int value1, value2;

    scanf("%d %d", &value1, &value2);

    int sum = (value1 + value2);
    int subtraction = value1 - value2;
    int multiplication = value1 * value2;
    printf("%d ,%d,%d", sum, subtraction, multiplication);

    return 0;
}