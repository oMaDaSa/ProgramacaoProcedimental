#include <stdio.h>

/*Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

int positivoOuNegativo(float num);

int main(){
    float num;
    int sinal;
    printf("insira um valor: ");
    scanf("%f", &num);
    sinal = positivoOuNegativo(num);

    if(sinal == -1){
        printf("O valor %.2f eh negativo\n", num);
    }else if(sinal == 1){
        printf("o valor %.2f eh positivo\n", num);
    }else{
        printf("O valor eh 0\n");
    }
    return 0;
}

int positivoOuNegativo(float num){
    if(num < 0){
        return -1;
    }else if(num > 0){
        return 1;
    }else{
        return 0;
    }
}