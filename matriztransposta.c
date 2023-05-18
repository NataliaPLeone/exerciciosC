#include <stdio.h>

int main(){

    int N,i,j;
    printf("Digite a ordem da matriz: ");
    scanf("%d",&N);
    float Matriz[N][N];
    for(i = 1;i <= N; i++){

        for(j = 1;j <= N; j++){

            printf("Digite o elemento [%d][%d] da matriz: ", i, j);
            scanf("%f", &Matriz[i][j]);


        }

    }



    for(i = 1;i <= N; i++){

        for(j = 1;j <= N; j++){

            printf("%.1f ", Matriz[j][i]);


        }
        printf("\n");


    }

}
