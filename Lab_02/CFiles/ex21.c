#include <stdio.h>
#include <stdlib.h>

/*
Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção
*/

int main(){
    int op;
    float a, b, res;

    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 numeros\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero)\n");
    printf("Opcao: ");
    scanf("%d", &op);
    
    if(op < 1 || op > 4){
        printf("Opcao invalida\n");
        system("pause");
        return 0;
    }else{
        printf("Insira os valores a e b: ");
        scanf("%f %f", &a, &b);
        switch(op){
            case 1:
                res = a + b;
                printf("Resultado: %.2f\n", res);
                break;
            case 2:
                res = a - b;
                printf("Resultado: %.2f\n", res);
                break;
            case 3:
                res = a * b;
                printf("Resultado: %.2f\n", res);
                break;
            case 4:
                res = a / b;
                printf("Resultado: %.2f\n", res);
                break;
        }
    }

    system("pause");
    return 0;
}