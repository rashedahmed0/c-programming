#include <stdio.h>

// function declaretion
void hello();
void goodBye();
int main()
{

    // function call
    hello();
    goodBye();
    return 0;
}

// function definetion
void hello()
{
    printf("hello \n");
}
void goodBye()
{
    printf("good bye");
}