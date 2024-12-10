#include <stdio.h>

int main()

{
    // print a table number of take user number
    int n;
    printf("enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        int table = n * i;

        printf("%d \n", table);
    }
}