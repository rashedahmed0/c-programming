#include <stdio.h>

int main()
{

    // area of circle

    int radius;
    printf("print circle radius : ");
    scanf("%d", &radius);
    float pi = 3.1416;
    float area = pi * (radius * radius);
    printf("area of circle is : %f", area);
    return 0;
};