#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 = Venda o carro!
entre 8 e 14 = Econômico!
maior que 14 = Super econômico!
*/

int main(){
    float dist, gas, cons;

    printf("Insira a distancia percorrida: ");
    scanf("%f", &dist);
    printf("Insira a quantidade de gasolina consumida: ");
    scanf("%f", &gas);

    cons = dist / gas;
    if(cons < 8){
        printf("Venda o carro!\n");
    }else if(cons >= 8 && cons <= 14){
        printf("Economico!\n");
    }else{
        printf("Super economico!\n");
    }

    system("pause");
    return 0;
}