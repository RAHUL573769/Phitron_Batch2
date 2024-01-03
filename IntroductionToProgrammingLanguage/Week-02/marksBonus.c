#include <stdio.h>

int main()
{

    int gotMarks, bonusMarks;
    scanf("%d %d", &gotMarks, &bonusMarks);
    int sumOfMarks = gotMarks + bonusMarks;

    if (sumOfMarks != 100)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}
