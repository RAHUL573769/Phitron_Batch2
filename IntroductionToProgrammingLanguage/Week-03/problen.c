#include <stdio.h>

int main()
{

    int inputValue;
    printf("Enter The Input Value");
    scanf("%d", &inputValue);
    while (inputValue > 1)
    {

        if (inputValue % 2 == 0)
        {

            inputValue = inputValue / 2;
        }

        else
        {

            inputValue = 3 * inputValue + 1;
        }

        printf("The result value is %d \n", inputValue);
    }

    return 0;
}