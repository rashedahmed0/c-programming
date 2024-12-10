#include <stdio.h>

// function declaretion
int table(int n);
int main()
{

    // function call
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    table(n);
    return 0;
}

// function definetion
int table(int n)

{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
}