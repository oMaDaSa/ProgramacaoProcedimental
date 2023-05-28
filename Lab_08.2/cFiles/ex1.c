#include <stdio.h>

/*Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array*/

int main(){
    float array[10] = {1,3,4.2,2.1,1,-42,-4.2,11,0,0.1};
    float *p = &array;

    for(int i = 0; i < 10; i++){
        printf("%p\n", p+i);
    }

    return 0;
}