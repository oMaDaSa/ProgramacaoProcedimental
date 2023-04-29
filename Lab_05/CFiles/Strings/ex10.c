#include <stdio.h>

/*Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

int main(){
    char produto[100];
    float valor;
    printf("Insira o nome do produto: ");
    fgets(produto, 100, stdin);
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);
    printf("Produto: %s", produto);
    printf("Valor total: R$%.2f\n", valor);
    printf("Valor do desconto: R$%.2f\n", valor*0.1);
    printf("Valor a vista: R$%.2f\n", valor*0.9);


    return 0;
}