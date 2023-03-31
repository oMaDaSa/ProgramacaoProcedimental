#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).
*/

int main(){
    int menu;
    float x, y, res;
    char op;

    do{
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        printf("Insira a opcao desejada: ");
        scanf("%d",&menu);

        if(menu == 5){
            printf("\nPrograma encerrado.\n");
            system("pause");
            return 0;
            break;
        }else if(menu >= 1 && menu <= 4){
            printf("Insira os respectivos valores: ");
            scanf("%f %f", &x, &y);
            switch(menu){
                case 1:
                    res = x + y;
                    op = '+';
                    break;
                case 2:
                    res = x - y;
                    op = '-';
                    break;
                case 3:
                    res = x * y;
                    op = '*';
                    break;
                case 4:
                    res = x / y;
                    op = '/';
                    break;
            }
            printf("%.2f %c %.2f = %.2f\n\n", x, op, y, res);
        }else{
            printf("\nOpcao invalida\n\n");
        }
    }while((menu != 5));
}