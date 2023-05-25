#include <stdio.h>

/*
Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números
*/

int main(){
    int a, b, soma, mult, sub;
    int *pa = &a, *pb = &b;
    float div;

    printf("Digite o valor de A e B: ");
    scanf("%d %d", pa, pb);

    soma = *pa + *pb;
    sub = *pa - *pb;
    mult = *pa * *pb;
    div = (float) *pa / *pb;

    printf("%d+%d = %d\n",*pa, *pb, soma);
    printf("%d-%d = %d\n",*pa, *pb, sub);
    printf("%d*%d = %d\n",*pa, *pb, mult);
    printf("%d/%d = %.2f\n",*pa, *pb, div);

    return 0;
}