#include <stdio.h>
#include <math.h>

int main()
{
    // Qs.7 (a) write a program to check given character digit or not
    char ch;
    int result;
    printf("enter the character : ");
    scanf("%d", &ch);
    result = ch > 0 && ch < 9;
    printf("%d \n", result);

    return 0;
}
