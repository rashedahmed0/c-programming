#include <stdio.h>

int main()
{
    //   check upper case and lower case
    char ch;
    printf("enter english latter : ");
    scanf("%c", &ch);

    if (ch > 'a' && ch < 'z')
    {
        printf("this is lower case ");
    }
    else if (ch > 'A' && ch < 'Z')
    {
        printf("this is upper case");
    }
    else
    {
        printf("this is not english latter ");
    }

    return 0;
}