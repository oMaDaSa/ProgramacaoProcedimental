#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba dois números e mostre qual deles é o maior.

int main(){
    float x, y;
    printf("Insira o num1: ");
    scanf("%f",&x);
    printf("Insira o num2: ");
    scanf("%f",&y);

    if(x>y) printf("O maior numero eh %.2f\n",x);
    else if(y > x) printf("O maior numero eh %.2f\n",y);
    else printf("Sao iguais \n");

    system("pause");
    return 0;
}