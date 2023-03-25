#include <stdio.h>
#include <stdlib.h>

/*
Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).
PREÇO ANTIGO PERCENTUAL DE AUMENTO
até R$ 50 5%
entre R$ 50 e R$ 100 10%
acima de R$ 100 15%
PREÇO NOVO MENSAGEM
até R$ 80 Barato
entre R$ 80 e R$ 120 (inclusive) Normal
entre R$ 120 e R$ 200 (inclusive) Caro
acima de R$ 200 Muito caro
*/

int main(){
    float precoAnt, precoNovo;

    printf("Digite o preco antigo em reais: ");
    scanf("%f", &precoAnt);

    if(precoAnt < 50){
        precoNovo = precoAnt * 1.05;
    }else if(precoAnt >= 50 && precoAnt <= 100){
        precoNovo = precoAnt * 1.10;
    }else{
        precoNovo = precoAnt * 1.15;
    }

    printf("Preco novo eh R$%.2f\n", precoNovo);

    if(precoNovo < 80){
        printf("Barato\n");
    }else if(precoNovo >= 80 && precoNovo <= 120){
        printf("Normal\n");
    }else if(precoNovo >= 120 && precoNovo <= 200){
        printf("Caro\n");
    }else{
        printf("Muito caro\n");
    }

    system("pause");
    return 0;
}