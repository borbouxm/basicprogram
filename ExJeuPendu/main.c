#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mot[] = "BONJOUR";
    char test;//sera le caract�re � tester dans le futur
    int i, count = 0, check, checkMot=0; /*i servira constamment d'indice pour les mots futurs et le passage dans la chaine
    count permet de compter le nombre de "vie" utilis�e
    check est une valeure test chaque fois remise � 0 dans le futur avant chaque passage dans la boucle
    checkMot aura le nombre de caract�res et sera compar� � motLength pour v�rifier si c'est ok ou non*/
    for(i=0;mot[i]!='\0';i++)//Permet de determiner la longueur du mot
    {
    }
    int motLength = i; //motLength est la longueur du mot
    char temp[motLength]; //un objet temporaire sera d�fini afin de servir au pendu sans modifier le contenu de "mot" qui a la longueur du mot � deviner
    for(i=0;i<motLength;i++)//ici, on ajoute les * au temp pour �tre utile � l'affichage
    {
        temp[i]='*';
    }
    do{
        printf("Mot � deviner : %s", temp); //Le %s permet d'afficher une chaine de caract�res au complet en un coup, sans devoir it�rer dessus
        printf("\nEntrez un caract�re\n");
        scanf(" %c", &test);//on lit le caract�re
        check = 0;//On remet la valeur de check � 0
        for(i=0; i<motLength;i++)//on parcourt la chaine de caract�re mot
        {
            if(mot[i]==test)//v�rifie si le caract�re entr� correspond � un caract�re dans le mot
            {
                temp[i]=mot[i];//on remet dans le terme qui sert � l'affichage du pendu le caract�re
                check = 1;//on place le check � 1 afin d'�viter l'�tape suivante
                checkMot++;//on incr�mente checkMot puisqu'il est compar� � chaque fois � la longueur du mot
            }
        }
        if(check == 0)//au cas o� le check est toujours �gal � 0, on perd une vie
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
