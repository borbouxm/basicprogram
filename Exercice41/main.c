#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentNumber, numberMax=0, numberMin=0;
    printf("Entrez des nombres, la valeur 0 met fin au programme\n");
    do
    {
        scanf("%d",&currentNumber);
        if(currentNumber>0)
        {
            if(currentNumber>numberMax)
            {
                numberMax=currentNumber;
            }
        }
        if(currentNumber<0)
        {
            if(currentNumber<numberMin)
            {
                numberMin=currentNumber;
            }
        }
    }while(currentNumber!=0);
    printf("Le nombre maximum est %d, le nombre minimum est %d", numberMax, numberMin);
    return 0;
}
