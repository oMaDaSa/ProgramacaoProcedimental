#include <stdio.h>
#include <string.h>

/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/

struct pessoas{
    char nome[100], endereco[100], telefone[12];
};
typedef struct pessoas pessoas;

int main(){
    const int k = 5; //qtd de pessoas
    int i, j, min, auxiliar, ordem[k], ordenado;
    pessoas pessoa[k];
    
    //leitura
    for(i = 0; i < k; i++){
        printf(" -Insira os dados da pessoa %d-\n", i+1);
        printf("Nome: ");
        fflush(stdin);
        fgets(pessoa[i].nome,100, stdin);
        printf("Telefone: ");
        fflush(stdin);
        fgets(pessoa[i].telefone, 12, stdin);
        printf("Endereco: ");
        fflush(stdin);
        fgets(pessoa[i].endereco,100, stdin);

        pessoa[i].nome[strlen(pessoa[i].nome)-1] = '\0';
        pessoa[i].telefone[strlen(pessoa[i].telefone)-1] = '\0';
        pessoa[i].endereco[strlen(pessoa[i].endereco)-1] = '\0';

        ordem[i] = i;
    }

    //ordena a ordem a ser imprimida com base nos nomes
    for (i = 0; i < k-1; i++) {
        min = i;
        for (j = i+1; j < k; j++) {
            if (strcmp(pessoa[j].nome, pessoa[min].nome) < 0){
                min = j;
            }
        }
        if (i != min) {
            auxiliar = ordem[i];
            ordem[i] = ordem[min];
            ordem[min] = auxiliar;
        }
    }

    printf("\n - Em ordem alfabetica -\n");
    for(i = 0; i < k; i++) {
        ordenado = ordem[i];
        printf("%s, telefone: %s, endereco: %s\n", pessoa[ordenado].nome, pessoa[ordenado].telefone, pessoa[ordenado].endereco);
    }

    return 0;
}