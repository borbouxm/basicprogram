#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price, sumPrice=0, payRest=0, n10=0, n5=0, n1=0, pay=0;
    do
    {
        printf("Entrez le prix de votre article\n");
        scanf("%d", &price);
        sumPrice=sumPrice + price;
    }while(price!=0);
    printf("Total à payer : %d\n", sumPrice);
    printf("Quelle est la somme que vous allez payer ?\n");
    do
    {
        scanf("%d", &pay);
        if(pay<sumPrice)
        {
            printf("Ce n'est pas assez !\n");
        }
    }while(pay<sumPrice);
    payRest = pay-sumPrice;
    if(payRest>=10)
    {
        do
        {
            payRest = payRest-10;
            n10++;
        }while(payRest>=10);
    }
    if(payRest>=5)
    {
        do
        {
            payRest = payRest-5;
            n5++;
        }while(payRest>=5);
    }
    n1 = payRest;
    printf("Votre retour est de %d billet(s) de 10, %d billet(s) de 5, %d piece(s) de 1", n10, n5, n1);
    return 0;
}
