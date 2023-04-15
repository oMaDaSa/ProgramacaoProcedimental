#include <stdio.h>

/*Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles.*/

int somaEntreInteiros(int a, int b);

int main(){
    int num1, num2, total;

    printf("Insira dois valores inteiros positivos: ");
    scanf("%d %d",&num1, &num2);

    total = somaEntreInteiros(num1, num2);
    printf("A soma entre os valores (A,B) -exclusivo- eh: %d", total);
    return 0;
}

int somaEntreInteiros(int a, int b){
    int soma = 0;
    for(int i = a+1; i < b; i++){
        soma += i;
    }
    return soma;
}

