#include <stdio.h>
int main()
{

    int choice, a, b, s;
    printf("\n 1 For Addition");
    printf("\n 2 For Subtraction");

    printf("Enter Choice");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
        printf("Enter two Numbers \n");
        scanf("%d %d", &a, &b);
        s = a + b;
        printf("The sum is %d", s);
        break;
    case 2:
        printf("Enter two Numbers \n");
        scanf("%d %d", &a, &b);
        s = a - b;
        printf("The sum is %d", s);
        break;
    }
    return 0;
}
