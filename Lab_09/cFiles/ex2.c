#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e imprima o vetor lido.*/

int main(){
    int *array, n, i;

    printf("Insira o tamanho do vetor a ser lido: ");
    scanf("%d",&n);
    array = (int*)malloc(n*sizeof(int));

    //scaneando o array
    for(i = 0; i < n; i++){
        printf("Insira o valor de array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    //printando o array
    printf("\n");
    for(i = 0; i < n; i++){
        printf("Array[%d] = %d \n", i, array[i]);
    }

    free(array);
    return 0;
}