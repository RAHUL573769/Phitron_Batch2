#include <stdio.h>
int main()
{

    int radius;
    float pie = 3.1416, area;
    printf("Enter The value of Radius ");
    scanf("%d", &radius);

    area = (pie * radius * radius);
    printf("The Area of Circle is %f", area);
}