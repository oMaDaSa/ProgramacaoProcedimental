#include <stdio.h>

/*Faça uma função que receba dois números e retorne qual deles é o maior*/

float maior(float h, float r);

int main(){
    float num1, num2;
    printf("Insira o valor 1: ");
    scanf("%f", &num1);
    printf("Insira o valor 2: ");
    scanf("%f", &num2);

    printf("O maior eh: %.2f\n",maior(num1,num2));
    return 0;
}

float maior(float a, float b){
    if(a>b) return a;
    else return b;
}