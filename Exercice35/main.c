#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=0,i=0,numberMax=0, number;
    do
    {
        i++;
        printf("\nEntrez le nombre numéro %d : ",i);
        scanf("%d", &number);
        if(number>numberMax)
        {
            pos = i;
            numberMax=number;
        }
    }while(i!=20);
    printf("Le plus grand de ces nombres est : %d\n", numberMax);
    printf("C'était le nombre numéro %d\n", pos);
    return 0;
}
