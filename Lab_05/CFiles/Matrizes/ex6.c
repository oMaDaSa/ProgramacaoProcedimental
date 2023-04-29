#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada*/

int main(){
    int matrizOriginal[4][4], matrizTransformada[4][4];
    srand(time(NULL));

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            matrizOriginal[i][j] = rand() % 20 + 1;
            matrizTransformada[i][j] = matrizOriginal[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j > i){
                matrizTransformada[i][j] = 0;
            }
        }
    }

    printf("Matriz original: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", matrizOriginal[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transformada: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", matrizTransformada[i][j]);
        }
        printf("\n");
    }
    return 0;
}