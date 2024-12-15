#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i=1;
    printf("Entrez un nombre\n");
    scanf("%d",&number);
    printf("Table de %d\n",number);
    do
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }while(i<=10);
    return 0;
}
