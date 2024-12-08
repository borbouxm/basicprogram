#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    printf("Entrez un nombre:\n");
    scanf("%lf",&x);
    if(x>0){
        printf("Le nombre est positif");
    }
    else if (x==0){
        printf("Le nombre est nul");
    }
    else{
        printf("Le nombre est négatif");
    }
    return 0;
}
