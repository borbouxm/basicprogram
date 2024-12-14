#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heure, minute, seconde;
    printf("Entrez l'heure\n");
    scanf("%d:%d:%d", &heure, &minute, &seconde);
    if(++seconde/60==1)
    {
        if(++minute/60==1)
        {
            if(++heure/24==1)
            {
                printf("00:00:00");
            }
            else
            {
                printf("%d:%d:%d", heure, 00, 00);
            }
        }
        else printf("%d:%d:%d",heure, minute, 00);
    }
    else
    {
        printf("%d:%d:%d", heure, minute, seconde);
    }
    return 0;
}
