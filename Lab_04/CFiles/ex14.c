#include <stdio.h>

/*Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!*/

void consumo(float km, float l);

int main(){
    float km, litros;
    printf("insira a distancia em km: ");
    scanf("%f",&km);
    printf("insira o consumo em L: ");
    scanf("%f",&litros);
    consumo(km,litros);
    return 0;
}

void consumo(float km, float l){
    float media = km/l;
    if(media < 8) printf("Venda o carro!\n");
    else if(media >= 8 && media <= 14) printf("Economico!\n");
    else printf("Super economico\n");
}
