#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e mostre quantos dos números são pares e quantos são
ímpares*/

int main(){
    int *array, n, i, pares = 0, impares = 0;

    printf("Insira o tamanho do vetor a ser lido: ");
    scanf("%d",&n);
    array = (int*)malloc(n*sizeof(int));

    //scaneando o array
    for(i = 0; i < n; i++){
        printf("Insira o valor de array[%d]: ", i);
        scanf("%d", &array[i]);
        if(array[i]%2 == 1) impares++;
        else pares++;
    }

    printf("%d par(es) e %d impar(es): ", pares, impares);
    free(array);

    return 0;
}