#include <stdio.h>

int main()

{
    // print 1 to 10 without 6
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d \n", i);
    }
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }
        printf("%d \n", i);
    }
}