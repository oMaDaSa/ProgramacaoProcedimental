#include <stdio.h>
#include <string.h>

/*
Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
 Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.*/

struct aeroportos{
    int cod, qtdSaida, qtdChegada;
};
typedef struct aeroportos aeroportos;

struct voos{
    int origem, destino; 
};
typedef struct voos voos;

int main(){
    const int k = 2;
    int i;
    aeroportos a[k];
    voos v[k];

    for(i = 0; i < k; i++){
        printf("\n -Insira os dados do aeroporto %d-\n", i+1);

        do{
            printf("Codigo: ");
            scanf("%d",&a[i].cod);
            if(a[i].cod < 0 || a[i].cod > k-1) printf("Codigo invalido, insira novamente\n");
        }while(a[i].cod < 0 || a[i].cod > k-1);

        printf("Quantidade de Saidas: ");
        scanf("%d",&a[i].qtdSaida);

        printf("Quantidade de Entrada: ");
        scanf("%d",&a[i].qtdChegada);
    }

    for(i = 0; i < k; i++){
        printf(" -Insira os dados do voo %d-\n", i+1);

        do{
            printf("Origem: ");
            scanf("%d",&v[i].origem);
        }while(v[i].origem < 0 && v[i].origem > k-1);

        do{
            printf("Destino: ");
            scanf("%d",&v[i].destino);
        }while(v[i].destino < 0 && v[i].destino > k-1);
    }

    return 0;
}