#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica
(b) Ponderada
(c) Harmônica
(d) Aritmética
*/

int main(){
    int x, y, z;
    char op;
    float media;

    printf("(a) Geométrica\n(b) Ponderada\n(c) Harmônica\n(d) Aritmética\n");
    scanf("%c", &op);
    printf("Insira os 3 numeros inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    
    switch (op)
    {
    case 'a':
        media = cbrt(x*y*z);
        break;
    case 'b':
        media = (1*x + 2*y + 3*z)/3;
        break;
    case 'c':
        media = 1/(1/x + 1/y + 1/z);
        break;
    case 'd':
        media = (x+y+z)/3;
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }

    printf("Media: %.2f\n", media);
    system("pause");
    return 0;
}