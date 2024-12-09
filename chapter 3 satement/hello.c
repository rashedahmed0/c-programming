#include <stdio.h>

int main()
{
    // write a statement for pass or not pass

    int number;
    printf("enter your number : ");
    scanf("%d", &number);
    if (number > 32)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }

    return 0;
}