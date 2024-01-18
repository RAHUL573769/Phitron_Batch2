#include <stdio.h>

// Function prototype
int sum(int a, int b);

int main()
{
    int num1, num2, result;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the sum function and store the result
    result = sum(num1, num2);

    // Display the result
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition
int sum(int a, int b)
{
    return a + b;
}
