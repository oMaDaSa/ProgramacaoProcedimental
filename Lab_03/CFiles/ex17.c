#include <stdio.h>
#include <stdlib.h>

/*
Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.
*/

int main(){
    float chico = 1.5, ze = 1.1;
    int anos = 0;

    while(chico >= ze){
        chico += 0.02;
        ze += 0.03;
        anos++;
    }
    printf("Sao necessarios %d anos para Chico ser maior que Ze\n", anos);
    system("pause");
    return 0;
}