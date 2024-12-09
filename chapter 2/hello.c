#include <stdio.h>
#include <math.h>

int main()
{
    //  logical operator
    printf("%d \n", 2 < 5 && 4 == 4);
    printf("%d \n", 2 < 5 && 4 == 2);
    printf("%d \n", 10 < 5 && 4 == 2);
    printf("%d \n", 10 < 5 || 1 > 2);
    printf("%d \n", 15 < 5 || 4 > 2);
    printf("%d \n", 5 == 5 || 4 > 2);
    printf("%d \n", !(5 == 5 || 4 > 2));

    return 0;
}
