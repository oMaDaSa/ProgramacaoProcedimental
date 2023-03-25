#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    O número digitado ao quadrado
    A raiz quadrada do número digitado
*/

int main(){
    float x;
    printf("Insira x: ");
    scanf("%f",&x);

    if(x>0){
        printf("A raiz de x eh:  %.2f\n",sqrt(x));
        printf("x ao quadrado eh: %2.f\n", x*x);   
    }
    else{
        printf("x nao positivo\n");
    }

    system("pause");
    return 0;
}