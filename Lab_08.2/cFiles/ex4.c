#include <stdio.h>

/*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

int main(){
    int array[5], *p = &array[0], i;

    for(i = 0; i < 5; i++){
        printf("Insira o valor de A[%d]: ", i);
        scanf("%d", p+i);
    }

    for(i = 0; i < 5; i++){
        if(p[i] % 2 == 0) printf("%p\n", p+i);
    }

    return 0;
}