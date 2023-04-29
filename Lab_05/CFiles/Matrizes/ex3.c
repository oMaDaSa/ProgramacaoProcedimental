#include <stdio.h>

/*Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.*/

int main(){
    int maiorLinha = 0, maiorColuna = 0, i, j;
    float matriz[4][4], maiorNumero;
    printf("Insira uma matriz 4x4:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%f",&matriz[i][j]);
        }
    }

    maiorNumero = matriz[0][0];
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(matriz[i][j] > maiorNumero){
                maiorNumero = matriz[i][j];
                maiorColuna = j;
                maiorLinha = i;
            }
        }
    }

    printf("O numero %.2f, na coluna %d, linha %d\n", maiorNumero, maiorColuna+1, maiorLinha+1);
    return 0;
}