#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Entrez 3 nombres\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if(a<b && b<c)
    {
        printf("Ils sont rang�s dans l'ordre croissant");
    }
    else
    {
        printf("Ils sont pas rang�s dans l'ordre croissant");
    }
    return 0;
}
