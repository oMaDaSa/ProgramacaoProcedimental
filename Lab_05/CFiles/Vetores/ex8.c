#include <stdio.h>

/*Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado*/


int main(){
    float vetor[10];
    int i, j, validade;

    for(i = 0; i < 10; i++){
        while(1){
            if(i != 0 && validade == 0){
                printf("Numero ja digitado, insira outro: ");
            }else{
                printf("Digite um numero inteiro: ");
            }
            scanf("%f", &vetor[i]);
            if(i == 0){
                break;
            }
            for(j = 0; j < i; j++){
                if(vetor[i] == vetor[j]){
                    validade = 0;
                    break;
                }else{
                    validade = 1;
                }
            }
            if(validade) break;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}