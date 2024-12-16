#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbre,i=1,somme=0;
    printf("Ce programme effectuera la somme des nombre de 1 jusqu'au nombre que vous allez entrer maintenant : \n");
    scanf("%d", &nbre);
    do
    {
        somme=somme+i;
        i++;
    }while(i<=nbre);
    printf("La somme est égale à %d", somme);
    return 0;
}
