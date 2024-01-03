#include <stdio.h>
int main()
{

    float base, height, area;

    printf("Enter the base of triangle");
    scanf("%f", &base);
    printf("Enter the height of triangle");
    scanf("%f", &height);
    area = (0.5) * base * height;
    printf("The area of Triangle is %f", area);
    return 0;
}