#include <stdio.h>
#include <math.h>

/*Escreva uma função para determinar a quantidade de números primos abaixo de N*/

int qtdPrimos(int n);

int main(){
    int num, total;

    printf("Insira um valor inteiro positivo: ");
    scanf("%d",&num);
    total = qtdPrimos(num);
    printf("Existem %d primos ate %d\n", total, num);
    return 0;
}

int qtdPrimos(int n){
    int divisores,qtdPrimos = 2, raiz;

    if(n <= 2){
        return 0;
    }else if(n == 3){
        return 1;
    }
    for(int i = 5; i < n; i+=2){
        divisores = 2;
        raiz = sqrt(i);
        for(int j = 3; j <= raiz; j++){
            if(i%j == 0){
                divisores++;
                break;
            }
        }
        if(divisores == 2){
            qtdPrimos++;
        }
    }
    return qtdPrimos;
}