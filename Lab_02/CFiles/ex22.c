#include <stdio.h>
#include <stdlib.h>

/*
Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main(){
    int idade, tempoTrabalho;

    printf("Insira a idade: ");
    scanf("%d",&idade);
    printf("Insira o tempo de servico: ");
    scanf("%d", &tempoTrabalho);
    
    if(idade >= 60 && tempoTrabalho >= 25){
        printf("Aposentadoria valida\n");
    }else if(idade >= 65){
        printf("Aposentadoria valida\n");
    }else if(tempoTrabalho >= 30){
        printf("Aposentadoria valida\n");
    }else{
        printf("Aposentadoria invalida\n");
    }

    system("pause");
    return 0;
}