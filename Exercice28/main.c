#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre_depart, nombre_final;
    printf("Fournir deux nombres, le deuxième supérieur au premier\n");
    scanf("%d\n%d", &nombre_depart, &nombre_final);
    do
    {
        printf("%d\n",nombre_depart);
        nombre_depart=nombre_depart*2;
    }while(nombre_depart<=nombre_final);
    return 0;
}
