#include <stdio.h>
#include <math.h>

int fatorial(int A){
    int i, fatorial = 1;

    for(i = A; i>0;i--){
        fatorial *= i;
    }
    return fatorial;

}

int main(){
    int x,i,fat= 1, v = 0;
    int n;
    float soma = 0;

    printf("x e n:");
    scanf("%d%d", &x, &n);



    printf("1 +");

    for(i = 1;i<n;i++){
        fat *= i;

        soma = soma + ((pow(x, i))/fat);
        printf("%f +",((pow(x, i))/fat));

    }

    printf("\n e^x = %f", soma+1);
}
