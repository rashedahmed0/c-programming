#include <stdio.h>

int main()

{
    // reverse table
    int n;
    printf("enter your number : ");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", n * i);
    }
    return 0;
}
