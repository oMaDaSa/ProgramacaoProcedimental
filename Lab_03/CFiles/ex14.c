#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
*/

int main(){
    int n,d1,d2;

    printf("Insira o numero de arremessos: ");
    scanf("%d",&n);
    srand(time(NULL));  
    for(int i = 0; i < n; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        printf("Os valores sao: %d e %d\n",d1,d2);
        if(d1>d2) printf(" -> Dado 1 eh maior\n");
        else if (d2>d1) printf(" -> Dado 2 eh maior\n");
        else printf(" -> Sao iguais\n");
    }

    system("pause");
    return 0;
}