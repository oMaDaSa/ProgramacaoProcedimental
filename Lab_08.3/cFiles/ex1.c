#include <stdio.h>

/*Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
chamada passando duas variáveis A e B, por exemplo, e após a execução da
função, A conterá o valor de B e B terá o valor de A. Imprima os valores
antes e depois da troca.*/

void trocaValores(int *x, int *y);

int main(){
    int valor1, valor2;
    printf("Insira os valores 1 e 2: ");
    scanf("%d %d", &valor1, &valor2);
    printf("Valores antes da troca: V1 = %d e V2 = %d\n", valor1, valor2);
    trocaValores(&valor1, &valor2);
    printf("Valores apos a troca: V1 = %d e V2 = %d\n", valor1, valor2);
    return 0;
}

void trocaValores(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}