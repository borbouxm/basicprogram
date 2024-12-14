#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrePhotocopie;
    float prix;
    printf("Entrez le nombre de photocopie attendues \n");
    scanf("%d", &nbrePhotocopie);
    if(nbrePhotocopie > 20)
    {
        prix=1.9+(nbrePhotocopie-20)*0.08;
        printf("Le prix est de %f",prix);
    }
    else if(nbrePhotocopie>10)
    {
        prix=1+(nbrePhotocopie-10)*0.09;
        printf("Le prix est de %f", prix);
    }
    else if(nbrePhotocopie<=10)
    {
        prix = nbrePhotocopie*0.1;
        printf("Le prix est de %f", prix);
    }

    return 0;
}
