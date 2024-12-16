#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact=1,i=1,nbre;
    printf("Entrez un nombre, nous allons en calculer la factorielle:\n");
    scanf("%d",&nbre);
    do
    {
        fact=fact*i;
        i++;
    }while(i<=nbre);
    printf("La factorielle est de %d", fact);
    return 0;
}
