#include <stdio.h>

/*Faça um programa que leia uma string e a imprima.*/

int main(){
    char string[80];
    printf("Insira uma string: ");
    fgets(string, 80, stdin);
    printf("%s", string);
    return 0;
}