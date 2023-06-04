#include <stdio.h>

/*Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.*/

int ordenar(int *a);

int main(){
    int valores[3], i;
    for(i = 0; i < 3; i++){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    ordenar(valores);

    for(i = 0; i < 3; i++){
        printf("Valor %d: %d", i + 1, valores[i]);
        printf("\n");

    }
    
    return 0;
}

int ordenar(int *arr){
    int i, pivo, j;
    if(arr[1] == arr[2] && arr[2] == arr[3]) return 1;
    for (i = 1; i < 3; i++) {
        pivo = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > pivo) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = pivo;
    }
    return 0;
}