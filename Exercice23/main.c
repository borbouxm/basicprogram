#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mois;
    printf("Entrez le numéro de votre mois, s'il vous plait\n");
    scanf("%d", &mois);
    if(mois >=1 && mois <= 12)
    {
        if(mois == 2)
        {
            printf("Le mois contient 28 jours\n");
        }else if(mois<=7)
        {
            if(mois%2)
            {
                printf("Le mois contient 31 jours\n");
            }
            else
            {
                printf("Le mois contient 30 jours\n");
            }
        }
        else
            {
                if(mois%2)
                {
                    printf("Le mois contient 30 jours\n");
                }
                else
                {
                    printf("Le mois contient 31 jours\n");
                }
            }
    }
    else
    {
        printf("Le nombre ne correspond à aucun mois du calendrier\n");
    }
    return 0;
}
