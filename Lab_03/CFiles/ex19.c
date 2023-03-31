#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/

int main(){
    int valor, cem = 0, cinq = 0, vint = 0, dez = 0, cinc = 0, dois = 0, um = 0;
    printf("Insira o valor do saque: ");
    scanf("%d",&valor);

    while(valor > 0){
        if(valor >= 100){
            cem = valor/100;
            valor -= 100*cem;
        }else if(valor >= 50){
            cinq = valor/50;
            valor -= 50*cinq;
        }else if(valor >= 20){
            vint = valor/20;
            valor -= 20*vint;
        }else if(valor >= 10){
            dez = valor/10;
            valor -= 10*dez;
        }else if(valor >= 5){
            cinc = valor/5;
            valor -= 5*cinc;
        }else if(valor >= 2){
            dois = valor/2;
            valor -= 2*dois;
        }else{
            um++;
            valor--;
        }
    }
    printf("Serao necessarias:\n");
    printf("%d notas de cem\n", cem);
    printf("%d notas de cinquenta\n", cinq);
    printf("%d notas de vinte\n", vint);
    printf("%d notas de dez\n",dez);
    printf("%d notas de cinco\n",cinc);
    printf("%d notas de dois\n",dois);
    printf("%d moeda de 1\n",um);
    system("pause");
    return 0;
}