#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,res;
    char op;
    const char comp = 's';
    printf("Donnez deux nombre entier et un caractere :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &op);
    if(op==comp){
        res=a+b;
        printf("somme = %d", res);
    }
    else{
        res = a*b;
        printf("produit = %d", res);
    }
    return 0;
}
