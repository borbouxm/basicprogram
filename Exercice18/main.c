#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    printf("Entrez votre nombre\n");
    scanf("%lf",&x);
    if(x>0)
    {
        printf("Le nombre est positif\n");
    }
    else{
        printf("Le nombre est négatif\n");
    }
    return 0;
}
