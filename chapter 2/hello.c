#include <stdio.h>
#include <math.h>

int main()
{
    //  assignment operator
    int a = 2;
    int b = 5;
    a += b;
    printf("%d \n", a);
    a -= b;
    printf("%d \n", a);
    a *= b;
    printf("%d \n", a);
    a /= b;
    printf("%d \n", a);
    a %= b;
    printf("%d \n", a);

    return 0;
}
