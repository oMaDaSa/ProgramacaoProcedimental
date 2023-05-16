#include <stdio.h>
#include <string.h>

/*
Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.*/

struct data{
    int dia, mes, ano;
};
typedef struct data data;

struct compromissos{
    char descricao[62];
    data data;
};
typedef struct compromissos compromissos;

int main(){
    const int k = 5;
    int i, j, m, a, posicao[k];
    compromissos compromisso[k];

    //leitura
    for(i = 0; i < k; i++){
        printf(" -Insira os dados do compromisso %d-\n", i+1);
        printf("Data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &compromisso[i].data.dia, &compromisso[i].data.mes, &compromisso[i].data.ano);

        printf("Descricao (ate 60 letras): ");
        fflush(stdin);
        fgets(compromisso[i].descricao, 62, stdin);

        //remove '\n'
        compromisso[i].descricao[strlen(compromisso[i].descricao)-1] = '\0';
    }

    do{
        printf("Insira o mes buscar compromisso (0 para encerrar o programa): ");
        scanf("%d",&m);
        if(m == 0) break;
        printf("Insira o ano buscar compromisso: ");
        scanf("%d",&a);
        
        for(i = 0, j = 0; i < k; i++){
            if(compromisso[i].data.mes == m && compromisso[i].data.ano == a){
                posicao[j] = i;
                j++;
            }
        }

        if(j=0) printf("Sem compromissos neste mes\n");
        else{
            printf("\n%d compromissos para o mes %d, no ano %d:\n", j, m, a);
            for(i = 0; i < j; i++){
            printf("dia %d: %s\n", compromisso[posicao[i]].data.dia, compromisso[posicao[i]].descricao);
            }
        }
    }while(m != 0);
    
    return 0;
}