#include <stdio.h>

/*Crie um programa que contenha uma função que permita passar por
parâmetro dois números inteiros A e B. A função deverá calcular a soma
entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modificar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal.*/

void soma(int *a, int *b);

int main(){
    int a, b;
    printf("Insira A e B: ");
    scanf("%d %d", &a, &b);
    soma(&a, &b);
    printf("A = %d\nB = %d\n", a, b);
    return 0;
}

void soma(int *a, int *b){
    *a += *b;
}