#include <stdio.h>

int main(){

    int a,b,c;
    printf("\nDigite a:");
    scanf("%d",&a);
    printf("\nDigite b:");
    scanf("%d",&b);
    printf("\nDigite c:");
    scanf("%d",&c);

    float raiz1,raiz2;

    float delta = 0;

    delta = (b*b) - (4*a*c);

    if(delta > 0){
        raiz1 = ((-b) + sqrt(delta)) /(2*a);
        raiz2 = ((-b) - sqrt(delta)) /(2*a);

        printf("\n\nexistem 2 raizes reais diferentes");
        printf("\n x1 = %f", raiz1);
        printf("\n x2 = %f", raiz2);



    } else if(delta = 0){
        raiz1 = ((-b) + sqrt(delta)) /(2*a);
        raiz2 = ((-b) - sqrt(delta)) /(2*a);

        printf("existem 2 raizes reais iguais");

    }else{
        printf("não existem raizes reais");
    }

}
