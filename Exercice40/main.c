#include <stdio.h>
#include <stdlib.h>

int main()
{
    float currentNumber, countNum=0, sumPos=0, sumNeg=0, countPos=0, countNeg=0, moyPos=0, moyNeg=0;
    printf("Entrez 20 nombres :\n");
    do
    {
        scanf("%f",&currentNumber);
        if(currentNumber>0)
        {
            sumPos=currentNumber+sumPos;
            countPos++;
        }
        else if(currentNumber<0)
        {
            sumNeg = sumNeg+currentNumber;
            countNeg++;
        }
        countNum++;
    }while(countNum!=20);
    if(countPos!=0)
    {
        moyPos=sumPos/countPos;
    }
    if(countNeg!=0)
    {
        moyNeg=sumNeg/countNeg;
    }
    printf("La moyenne des nombres positifs est %f, la moyenne des nombres negatifs est %f",moyPos,moyNeg);
    return 0;
}
