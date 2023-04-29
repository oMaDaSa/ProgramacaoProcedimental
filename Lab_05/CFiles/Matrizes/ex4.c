#include <stdio.h>

/*Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/

int main(){
    int i, j, encontrados = 0;
    float matriz[5][5], encontrar;
    printf("Insira uma matriz 5x5:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%f",&matriz[i][j]);
        }
    }

    printf("Insira o valor a procurar: ");
    scanf("%f", &encontrar);

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(matriz[i][j] == encontrar){
                encontrados++;
                printf("Linha: %d | Coluna: %d\n",i+1,j+1);
            }
        }
    }

    if(encontrados == 0){
        printf("Valor nao encontrado\n");
    }
    
    return 0;
}