#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo
*/

int main(){
    float a, b, res;
    char op;

    printf("| + | - | * | / |\n");
    printf("Escolha uma das operacoes: ");
    scanf("%c", &op);

    printf("Insira o primeiro valor: ");
    scanf("%f", &a);
    printf("Insira o segundo valor: ");
    scanf("%f", &b);
    
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Operacao invalida\n");
        system("pause");
        return 0;
    }  

    printf("resultado = %.2f\n",res);

    system("pause");
    return 0;
}