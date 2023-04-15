#include <stdio.h>
#include <math.h>
const float pi = 3.141592653;

/*Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.*/

float volEsfera(float raio);

int main(){
    float raio, volume;
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);
    volume = volEsfera(raio);
    printf("O volume da esfera de raio %.2f eh %.2f unidades\n",raio, volume);
    return 0;
}

float volEsfera(float raio){
    float volume = pow(raio,3)*(4.0/3.0)*pi;
    return volume;
}