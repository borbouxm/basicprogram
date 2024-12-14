#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heure, minute, seconde;
    printf("Entrez l'heure\n");
    scanf("%d:%d:%d", &heure, &minute, &seconde);
    if(heure<=23 && heure > 0)
        {
            if(minute<=59 && minute > 0)
            {
                if(seconde<=59 && seconde > 0)
                {
                    if(++seconde/60==1)
                    {
                        if(++minute/60==1)
                        {
                            if(++heure/24==1)
                            {
                                printf("Une seconde plus tard, il sera 00:00:00");
                            }
                            else
                            {
                                printf("Une seconde plus tard, il sera %d:%d:%d", heure, 00, 00);
                            }
                        }
                        else printf("Une seconde plus tard, il sera %d:%d:%d",heure, minute, 00);
                    }
                    else
                    {
                        printf("Une seconde plus tard, il sera %d:%d:%d", heure, minute, seconde);
                    }
                }
            else
                {
                printf("Seconde pas valide!");
                }
            }
        else
            {
                printf("Minute pas valide !");
            }
        }
    else
    {
        printf("heure non valide!\n");
    }
    return 0;
}
