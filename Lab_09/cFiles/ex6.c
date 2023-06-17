#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que simule a memória de um computador: o usuário
irá especificar o tamanho da memória, ou seja, quantos bytes serão
alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um
valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2
opções: inserir um valor em uma determinada posição ou consultar o
valor contido em uma determinada posição. A memória deve iniciar com
todos os dados zerados*/

int main(){
    int n, *memory, pos;
    char c;
    printf("Insira o tamanho da memoria em bytes: ");
    scanf("%d", &n);
    memory = (int*)calloc(n/4, 1);

    do{
        printf("\nc - consultar | i - inserir | diferente - sair\n");
        printf("Insira a operacao desejada: ");
        scanf(" %c", &c);
        switch(c){
            case 'I':
            case 'i':
                printf("Insira a posicao da memoria a inserir: ");
                scanf("%d", &pos);
                if(pos >= n/4 || pos < 0){
                    printf("Posicao invalida\n");
                    break;
                }
                printf("Insira o valor a inserir: ");
                scanf("%d", &memory[pos]);
                printf("%d Inserido na posicao %d da memoria\n", memory[pos], pos);
                break;
            case 'C':
            case 'c':
                printf("Insira a posicao da memoria a consultar: ");
                scanf("%d", &pos);
                if(pos >= n/4 || pos < 0){
                    printf("Posicao invalida\n");
                    break;
                }
                printf("x%d = %d", pos, memory[pos]);
                break;
            default: break;
        }
    }while(c != 'i' || c != 'c');

    return 0;
}