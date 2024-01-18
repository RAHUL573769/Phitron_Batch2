#include <stdio.h>

int main()
{

    add();
}

add()
{

    int a, b, c;
    printf("Enter two Numbers");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The Sum is %d", c);
}