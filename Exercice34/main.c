#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guessNumber, number=23;
    printf("Entrez un nombre compris entre 15 et 25\n");
    do
    {
        scanf("%d", &guessNumber);
        if(guessNumber<15 || guessNumber>25)
        {
            printf("Le nombre doit être compris entre 15 et 25\n");
        }
        else if(guessNumber<number)
        {
            printf("Trop petit!\n");
        }
        else if(guessNumber>number)
        {
            printf("Trop grand!\n");
        }
    }while(guessNumber!=number);
    printf("Vous avez deviné!\n");
    return 0;
}
