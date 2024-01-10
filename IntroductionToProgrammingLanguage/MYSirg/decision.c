#include <stdio.h>
int main()
{
    int a, x;
    printf("Enter a Number");

    scanf("%d", &a);
    x = (a > 0) ? printf("The Number is Positive %d", a) : printf("The Number is Negative %d", a);

    return 0;
}
