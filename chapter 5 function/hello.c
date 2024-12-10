#include <stdio.h>

// function declaretion
void hi();
void salam();
int main()
{

    // function call
    char ch;
    printf("type a for muslim and o for other relagion : ");
    scanf(" %c", &ch);
    if (ch == 'a')
    {
        salam();
    }
    else
    {
        hi();
    }
    return 0;
}

// function definetion
void hi()
{
    printf("hi");
}
void salam()
{
    printf("assalamu alaikum ");
}