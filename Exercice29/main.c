#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=7;
    do
    {
        printf("Le carré de %d est %d\n", number, number*number);
        number++;
    }while(number<=20);
    return 0;
}
