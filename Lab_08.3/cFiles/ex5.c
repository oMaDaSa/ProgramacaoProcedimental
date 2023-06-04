#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main(){
    int parteInteira;
    float num, parteFracionaria;

    printf("Insira um numero real: ");
    scanf("%f", &num);

    frac(num, &parteInteira, &parteFracionaria);
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.3f\n", parteFracionaria);
    return 0;
}

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - ((float)(*inteiro));
}