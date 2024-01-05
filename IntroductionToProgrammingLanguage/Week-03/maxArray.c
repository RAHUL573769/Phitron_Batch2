#include <stdio.h>

int main()
{
    int array[6];
    int i, n = 6;
    int max = array[0];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > n)
        {

            max = array[i];
        }
    }

    printf("The Max Value is %d", max);

    return 0;
}
