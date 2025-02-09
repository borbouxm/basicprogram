#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mot[] = "BONJOUR";
    char test;//sera le caractère à tester dans le futur
    int i, count = 0, check, checkMot=0; /*i servira constamment d'indice pour les mots futurs et le passage dans la chaine
    count permet de compter le nombre de "vie" utilisée
    check est une valeure test chaque fois remise à 0 dans le futur avant chaque passage dans la boucle
    checkMot aura le nombre de caractères et sera comparé à motLength pour vérifier si c'est ok ou non*/
    for(i=0;mot[i]!='\0';i++)//Permet de determiner la longueur du mot
    {
    }
    int motLength = i; //motLength est la longueur du mot
    char temp[motLength]; //un objet temporaire sera défini afin de servir au pendu sans modifier le contenu de "mot" qui a la longueur du mot à deviner
    for(i=0;i<motLength;i++)//ici, on ajoute les * au temp pour être utile à l'affichage
    {
        temp[i]='*';
    }
    do{
        printf("Mot à deviner : %s", temp); //Le %s permet d'afficher une chaine de caractères au complet en un coup, sans devoir itérer dessus
        printf("\nEntrez un caractère\n");
        scanf(" %c", &test);//on lit le caractère
        check = 0;//On remet la valeur de check à 0
        for(i=0; i<motLength;i++)//on parcourt la chaine de caractère mot
        {
            if(mot[i]==test)//vérifie si le caractère entré correspond à un caractère dans le mot
            {
                temp[i]=mot[i];//on remet dans le terme qui sert à l'affichage du pendu le caractère
                check = 1;//on place le check à 1 afin d'éviter l'étape suivante
                checkMot++;//on incrémente checkMot puisqu'il est comparé à chaque fois à la longueur du mot
            }
        }
        if(check == 0)//au cas où le check est toujours égal à 0, on perd une vie
        {
            count++;
        }
    }while(count<6 && checkMot != motLength);//Ceci est la condition de la boucle, tant que c'est faux, on reste dedans
    if(checkMot == motLength)
    {
        printf("\nVous avez trouver le mot !");
    }else
    {
        printf("\nPerdu !");
    }
    return 0;
}
