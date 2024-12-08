#include <stdio.h>
#include <stdlib.h>

int main()
{
    float priceHT=2400,priceTTC,remise;
    printf("Quel est le prix ?\n");
    //scanf("%f\n", &priceHT);
    priceTTC = priceHT*1.21;
    if(priceTTC<1500){
        printf("Le prix TTC est de %.2f",priceTTC);
    }
    if(priceTTC>=1500 && priceTTC<2500){
        remise = priceTTC*0.01;
        printf("La remise est de %.2f et le nouveau prix est de %.2f", remise, priceTTC-remise);
    }
    if(priceTTC>=2500){
        remise=priceTTC*0.02;
        printf("La remise est de %.2f et le nouveau prix est de %.2f", remise, priceTTC-remise);
    }
    return 0;
}
