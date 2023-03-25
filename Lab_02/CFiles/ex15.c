#include <stdio.h>
#include <stdlib.h>

/*
Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por
diante
*/

int main(){
    int x;

    printf("Insira um valor inteiro no intervalo [1,7]: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Segunda\n");
        break;
    case 2:
        printf("Terca\n");
        break;
    case 3:
        printf("Quarta\n");
        break;
    case 4:
        printf("Quinta\n");
        break;
    case 5:
        printf("Sexta\n");
        break;
    case 6:
        printf("Sabado\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
        printf("Opcao invalida\n");
    }

    system("pause");
    return 0;
}