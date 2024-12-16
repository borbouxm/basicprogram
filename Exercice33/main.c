#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guessNumber, number = 2;
    printf("Entrez un nombre entre 1 et 3\n");
    do
    {
        scanf("%d", &guessNumber);
        if(guessNumber<1 || guessNumber > 3)
        {
            printf("J'ai dit un nombre compris entre 1 et 3 !\n");
        }
    }while(guessNumber!=number);
    printf("Vous avez deviné !");
    return 0;
}
