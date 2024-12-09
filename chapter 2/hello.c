#include <stdio.h>
#include <math.h>

int main()
{
    // Valid instructions
    int a, b, c;
    b = 2;
    c = 3;
    a = b + c;
    printf("sum of b and c %d \n", a);
    a = b - c;
    printf("minus of b and c  %d \n", a);
    a = b * c;
    printf("multiply of b and c  %d \n", a);

    a = pow(b, c);
    printf("power of b and c  %d \n", a);

    return 0;
}
