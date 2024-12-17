#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    float nbreSup10, result, percentSup10;
    printf("Entrez les resultats\n");
    do
    {
        scanf("%f", &result);
        if(result >= 0 && result <= 20)
        {
            if(result >= 10)
            {
                nbreSup10++;
                printf("%f\n", nbreSup10);
            }
            count++;
        }
        else
        {
            printf("Ce score n'est pas valable !\n");
        }
    }while(count!=30);
    percentSup10 = (nbreSup10/30)*100;
    printf("Le pourcentage de score superieur a 10 est de %.2f", percentSup10);
    return 0;
}
