#include <stdio.h>
#include <math.h>

/*Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.*/

float calculaHipotenusa(float catetoA, float catetoB);

int main(){
    float catetoA, catetoB, hipotenusa;
    printf("Insira os valores do cateto A: ");
    scanf("%f", &catetoA);
    printf("Insira os valores do cateto B: ");
    scanf("%f", &catetoB);

    hipotenusa = calculaHipotenusa(catetoA, catetoB);
    printf("O valor da hipotenusa eh %.2f\n",hipotenusa);
    return 0;
}

float calculaHipotenusa(float catetoA, float catetoB){
    float hipotenusa = sqrt(pow(catetoA,2) + pow(catetoB,2));
    return hipotenusa;
}