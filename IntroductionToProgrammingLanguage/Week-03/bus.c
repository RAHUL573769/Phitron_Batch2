#include <stdio.h>

int main()
{

    int i = 1, sum = 0, n;

    printf("Enter the number of Passengers");
    scanf("%d", &n);
    while (i <= n)
    {
        int w;

        printf("The Weight is");
        scanf("%d", &w);
        sum = sum + w;
        i++;
    }

    printf("The sum is %d", sum);

    return 0;
}