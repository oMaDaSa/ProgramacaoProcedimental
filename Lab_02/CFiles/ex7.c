#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”
*/

int main(){
    float x, y;
    printf("Insira o num1: ");
    scanf("%f",&x);
    printf("Insira o num2: ");
    scanf("%f",&y);

    if(x>y) printf("O maior numero eh %.2f\n",x);
    else if(y > x) printf("O maior numero eh %.2f\n",y);
    else printf("Numeros iguais\n");

    system("pause");
    return 0;
}