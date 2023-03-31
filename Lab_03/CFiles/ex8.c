#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido
*/

int main()
{
    int x, maior, menor;

    for (int i = 1; i <= 10; i++){
        printf("Insira o valor %d: ", i);
        scanf("%d", &x);
        if (i == 1){
            maior = x;
            menor = x;
        }
        else{
            if (x > maior){
                maior = x;
            }
            if (x < menor){
                menor = x;
            }
        }
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    system("pause");
    return 0;
}