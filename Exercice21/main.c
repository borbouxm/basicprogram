#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    printf("Pourcentage obtenu en % ?\n");
    scanf("%f", &score);
    if(score>=60 && score<70){
        printf("C'est une Satisfaction.\n");
    }
    if(score>=70 && score<80){
        printf("C'est une Distinction !\n");
    }
    if(score>=80 && score <90){
        printf("C'est une Grande Distinction !!\n");
    }
    if(score>=90){
        printf("C'est la Plus Grande Distinction, toutes mes felicitations!!!\n");
    }
}
