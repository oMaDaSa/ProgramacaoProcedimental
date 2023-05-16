#include <stdio.h>
#include <string.h>

/*
Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem*/

struct eletrodomesticos{
    char nome[17];
    float potencia, tempo;
};
typedef struct eletrodomesticos eletrodomesticos;

int main(){
    const int k = 3;
    float consumoTotal = 0, consumoRelativo[k];
    int t, i;
    eletrodomesticos eletrodomestico[k];

    for(i = 0; i < k; i++){
        printf(" -Insira os dados do eletrodomestico %d-\n", i+1);

        printf("Nome: ");
        fflush(stdin);
        fgets(eletrodomestico[i].nome, 17, stdin);

        printf("Potencia (kW): ");
        scanf("%f",&eletrodomestico[i].potencia);

        printf("Tempo por dia (em horas): ");
        scanf("%f",&eletrodomestico[i].tempo);
        
        //remove '\n'
        eletrodomestico[i].nome[strlen(eletrodomestico[i].nome)-1] = '\0';
    }

    printf("\nInsira o intervalo (em dias): ");
    scanf("%d", &t);

    for(i = 0; i < k; i++){
        consumoTotal += eletrodomestico[i].potencia * eletrodomestico[i].tempo * t; //em kw/mes
    }

    for(i = 0; i < k; i++){
        consumoRelativo[i] = (eletrodomestico[i].potencia * eletrodomestico[i].tempo * t)/consumoTotal;
    }
    
    printf("\nConsumo total de %.2fkW em %d dias\n", consumoTotal, t);
    for(i = 0; i < k; i++){
        printf("Consumo relativo do(a) %s eh de %.2f%% do Consumo Total\n", eletrodomestico[i].nome, consumoRelativo[i]*100);
    }

    return 0;
}