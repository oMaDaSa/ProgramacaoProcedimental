#include <stdio.h>
#include <string.h>

/*Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0.*/

struct carros{
    char marca[17];
    int ano;
    float preco;
};
typedef struct carros carros;

int main(){
    const int k = 5; 
    carros carro[k];
    float p;
    int i;

    //leitura
    for(i = 0; i < k; i++){
        printf(" -Insira os dados do carro %d-\n", i+1);
        printf("Marca: ");
        fflush(stdin);
        fgets(carro[i].marca,100, stdin);
        printf("Ano: ");
        scanf("%d", &carro[i].ano);
        printf("Preco: ");
        scanf("%f", &carro[i].preco);

        carro[i].marca[strlen(carro[i].marca)-1] = '\0';
    }

    do{
        printf("\nInsira o preco maximo a buscar (digite 0 para encerrar):");
        scanf("%f", &p);
        if(p == 0) break;
        printf(" -Carros ate R$%.2f\n-", p);
        for(i = 0; i < k; i++){
            if(carro[i].preco < p){
                printf("Marca: %s\n", carro[i].marca);
                printf("Ano: %d\n", carro[i].ano);
                printf("Preco: R$%.2f\n", carro[i].preco);
                printf("\n");
            }
        }
    }while(p != 0);

    return 0;
}