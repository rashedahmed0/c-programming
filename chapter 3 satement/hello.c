#include <stdio.h>

int main()
{
    // write a grading statement

    int number;
    printf("enter your number : ");
    scanf("%d", &number);
    if (number > 80)
    {
        printf("a+");
    }
    else if (number > 69 && number < 80)
    {
        printf("a");
    }
    else if (number > 33 && number < 60)
    {
        printf("a-");
    }

    return 0;
}