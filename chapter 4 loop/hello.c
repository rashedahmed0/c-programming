#include <stdio.h>

int main()

{
    // sum of n neutral number and print reverse
    int sum = 0;
    for (int i = 10; i >= 1; i--)
    {
        sum += i;
        printf("%d \n", i);
    }
    printf("%d \n", sum);
    return 0;
}