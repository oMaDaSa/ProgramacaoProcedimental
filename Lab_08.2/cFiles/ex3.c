#include <stdio.h>

/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.
*/

int main(){
    int array[5], *p = &array[0], i;

    for(i = 0; i < 5; i++){
        printf("Insira o valor de A[%d]: ", i);
        scanf("%d", p+i);
    }

    for(i = 0; i < 5; i++){
        printf("2*%d = %d\n", *(p+i), *(p+i)*2);
    }

    return 0;
}