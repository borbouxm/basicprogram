#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,month,year;
    printf("Entrez le jour\n");
    scanf("%d",&day);
    printf("Entrez le mois\n");
    scanf("%d",&month);
    printf("Entrez l'année\n");
    scanf("%d", &year);
    if(month>0 && month <=12)
    {
        if(day>0)
        {
            if(month == 2)
            {
                if(year%400==0 && day <=29)
                {
                    printf("La date est ok !");
                }
                else if(year%4==0 && year%100!=0)
                {
                    if(day<=29)
                    {
                        printf("La date est ok !");
                    }
                }
                else if(day<=28)
                {
                    printf("La date est ok !");
                }
                else
                {
                    printf("La date n'est pas ok !");
                }
            }
            if(month<=7 && month!=2)
            {
                if(month%2==0 && day<=30)
                {
                    printf("La date est ok !");
                }
                else if(month%2!=0 && day<=31)
                {
                    printf("La date est ok !");
                }
                else
                {
                    printf("La date est pas ok !");
                }
            }
            else if(month>=8)
            {
                if(month%2==0 && day <= 31)
                {
                    printf("La date est ok!");
                }
                else if (month%2!=0 && day <= 30)
                {
                    printf("La date est ok !");
                }
                else
                {
                    printf("La date est pas ok !");
                }
            }
        }
    else
        {
            printf("La date est pas ok !");
        }
    }
    else
    {
        printf("La date est pas ok!");
    }
    return 0;
}
