#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbreMin=0, nbreMax=0, count=0, number;
    printf("Entrez les nombres a analyser\n");
    do
    {
        scanf("%d", &number);
        if(number != 0)
        {
             if(nbreMax<number)
            {
                nbreMax=number;
            }
            else if(nbreMin>number)
            {
                nbreMin=number;
            }
            count++;
        }
        else
        {
            printf("Ce nombre n'est pas valable !\n");
        }
    }while(count!=20);
    printf("Le nombre maximum est %d, le nombre minimum est %d",nbreMax,nbreMin);
    return 0;
}
