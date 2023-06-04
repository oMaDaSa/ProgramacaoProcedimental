#include <stdio.h>

/*
Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B.
*/

int main(){
    int a, b, soma;
    int *pa = &a, *pb = &b;

    printf("Digite o valor de A e B: ");
    scanf("%d %d", pa, pb);
    soma = (*pa *= 2) + (*pb *= 2);

    printf("2A+2B = %d\n", soma);

    return 0;
}