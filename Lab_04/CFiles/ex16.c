#include <stdio.h>

/*Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
sinais de igual serão mostrados.
*/

void desenhaLinha(int x);

int main(){
    int qtdIguais;

    printf("Insira o tamanho da linha: ");
    scanf("%d",&qtdIguais);

    desenhaLinha(qtdIguais);
    return 0;
}

void desenhaLinha(int x){
    for(int i=0; i< x; i++){
        printf("=");
    }
}

