#include <stdio.h>

// function declaretion
int sum(int a, int b);
int main()
{

    // function call
    int x, y;
    printf("enter first number : ");
    scanf("%d", &x);
    printf("enter second number : ");
    scanf("%d", &y);
    int result = sum(x, y);
    printf("sum is :  %d", result);
    return 0;
}

// function definetion
int sum(int a, int b)
{
    int c = a + b;
    return c;
}