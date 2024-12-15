#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbre=-1;
    printf("Donnez un nombre entier positif inférieur à 100\n");
    do
    {
        scanf("%d",&nbre);
    }while(!(nbre>0 && nbre < 100));
    printf("Merci pour le nombre %d", nbre);
    return 0;
}
