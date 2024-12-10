#include <stdio.h>

int main()

{
    // factorial number
    int a;
    printf("enter your number ");
    scanf("%d", &a);

    int fatorial = 1;
    for (int i = 1; i <= a; i++)
    {
        fatorial = fatorial * i;
    }
    printf("%d", fatorial);
    return 0;
}
