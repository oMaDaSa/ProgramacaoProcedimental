#include <stdio.h>
#include <math.h>
const float pi = 3.141592;

/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
cilindro.*/

float volCilindro(float h, float r);

int main(){
    float raio, altura, volume;
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    volume = volCilindro(raio, altura);
    printf("O volume do cilindro eh: %.2f unidades\n",volume);
    return 0;
}

float volCilindro(float r, float h){
    float vol = pi * pow(r,2) * h;
    return vol;
}