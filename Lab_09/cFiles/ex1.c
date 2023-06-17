#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário digitar os 5 números no espaço alocado;
c) Mostre na tela os 5 números;
d) Libere a memória alocada.*/

int main(){
    int *array, n = 5, i;
    array = (int*)malloc(n*sizeof(int));

    //scaneando o array
    for(i = 0; i < n; i++){
        printf("Insira o valor de array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    //printando o array
    for(i = 0; i < n; i++){
        printf("Array[%d] = %d \n", i, array[i]);
    }

    free(array);
    return 0;
}