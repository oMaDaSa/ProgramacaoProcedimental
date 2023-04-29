#include <stdio.h>
#include <string.h>

/*Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
a) O modelo de carro mais econômico;
b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.
*/

int  main(){
    char modelos[5][100];
    float km[5];
    int i, maisEconomicoPos = 0, maisEconomico;

    printf("Insira 5 modelos de carro:\n");
    for(i = 0; i < 5; i++){
        fflush(stdin);
        fgets(modelos[i], 100, stdin);
        modelos[i][strlen(modelos[i])-1] = '\0';
    }

    printf("Insira os respectivos consumos (Km/L):\n");
    for(i = 0; i < 5; i++){
        scanf("%f", &km[i]);
        if(i == 0){
            maisEconomico = km[i];
            maisEconomicoPos = i;
        }
        else if(km[i] > maisEconomico){
            maisEconomico = km[i];
            maisEconomicoPos = i;
        }
    }

    printf("O carro mais economico eh o %s!\n", modelos[maisEconomicoPos]);
    printf("Para percorrer 1000Km:\n");
    for(i = 0; i < 5; i++){
        printf(" -> O %s consome %.2fL\n", modelos[i], 1000.0/(km[i]));
    }
    
    return 0;
}