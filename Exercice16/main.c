#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    printf("Entrez deux nombres\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    if(a<b)
    {
        printf("Ils sont rang�s par ordre croissant");
    }
    else{
        printf("Ils sont pas rang�s par ordre croissant");
    }
    return 0;
}
