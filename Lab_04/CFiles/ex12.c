#include <stdio.h>

/*Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).*/

float somaAlgarismos(int x);

int main(){
    int num, soma;
    printf("Insira um valor inteiro maior que zero: ");
    scanf("%d",&num);
    
    if(num <= 0){
        printf("Numero invalido");
        return 0;
    }

    soma = somaAlgarismos(num);
    printf("A soma dos algarismos de %d eh: ",soma);

    return 0;
}

float somaAlgarismos(int x){
    int i = 1, soma = 0;
    while(x > 0){
        soma += x%10*i;
        x /= 10;
    }
    return soma;
}