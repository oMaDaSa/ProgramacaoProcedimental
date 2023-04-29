#include <stdio.h>

/*Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui*/

int maiorqDez(int x);

int main(){
    float matriz[4][4];
    int count = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%f",&matriz[i][j]);
            if(maiorqDez(matriz[i][j])) count++;
        }
    }

    printf("%d numeros sao maior que 10: \n", count);
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(maiorqDez(matriz[i][j])) printf("A[%d][%d] = %.2f\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}

int maiorqDez(int x){
    if(x > 10) return 1;
    else return 0;
}