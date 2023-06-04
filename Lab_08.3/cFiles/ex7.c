#include <stdio.h> 

/*Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que
este elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
o programa que a chamou o valor 15 e o número 3 (indicando que o número
15 ocorreu 3 vezes). A função deve ser do tipo void.*/

void maiorValor(int *arr, int n, int *maior, int *vezes);

int main(){
    int i, maior, vezes, arr[10];
    for(i = 0; i < 10; i++){
        printf("Digite o %do elemento do array: ", i+1);
        scanf("%d", &arr[i]);
    }

    maiorValor(arr, 10, &maior, &vezes);
    printf("O maior valor do array eh %d, que aparece %d vezes.", maior, vezes);
    
    return 0;
}

void maiorValor(int *arr, int n, int *maior, int *vezes){
    int i;

    //encontra o maior valor
    *maior = arr[0];
    for(i = 0; i < n; i++){
        if(*maior < arr[i]) *maior = arr[i];
    }

    //conta quantas vezes o maior aparece
    *vezes = 0;
    for(i = 0; i < n; i++){
        if(arr[i] == *maior){
            *vezes += 1;
        }
    }
}