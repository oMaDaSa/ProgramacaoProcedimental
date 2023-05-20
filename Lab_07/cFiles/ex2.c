#include <stdio.h>

/*
Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.
*/

int main(){
    int inteiro, *pInteiro = &inteiro;
    float real, *pReal = &real;
    char caracter, *pCaracter = &caracter;

    *pInteiro = 2;
    *pReal = 2.5;
    *pCaracter = 'a';

    *pInteiro += 1;
    *pReal += 1;
    *pCaracter += 1;

    printf("Inteiro: %d -> %d\n", inteiro-1, *pInteiro);
    printf("Real: %.1f -> %.1f\n", real-1, *pReal);
    printf("Caracter: %c -> %c\n", caracter-1, *pCaracter);

    return 0;
}