#include <stdio.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz.*/

int main(){
    float array[3][3];
    float *p = &array;
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++, p += 1){
            printf("Endereco da pos[%d][%d] = %p\n", i, j, p);
        }
    }

    p = &array;
    return 0;
}