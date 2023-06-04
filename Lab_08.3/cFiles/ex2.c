#include <stdio.h>

/*Faça um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2
variáveis na tela.*/

void maiorMenor(int *maior, int *menor);

int main(){
    int valor1, valor2;
    printf("Insira os valores 1 e 2: ");
    scanf("%d %d", &valor1, &valor2);
    maiorMenor(&valor1, &valor2);
    printf("O maior valor eh %d\nO menor valor eh %d\n", valor1, valor2);
    return 0;
}

void maiorMenor(int *maior, int *menor){
    int aux;
    if(*maior < *menor){
        aux = *maior;
        *maior = *menor;
        *menor = aux;
    }
}