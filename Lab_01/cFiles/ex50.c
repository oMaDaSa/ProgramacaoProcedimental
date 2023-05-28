#include <stdio.h>
#include <stdlib.h>

/*
Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/

int main()
{
    int idade, anoAtual, anoNasc;
    char aniversario;

    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Ano atual: ");
    scanf("%d", &anoAtual);
    printf("Fez aniversario esse ano? ('n'/'s'): ");
    scanf(" %c", &aniversario);

    anoNasc = anoAtual - idade;

    if(aniversario == 'n' || aniversario == 'N'){
        anoNasc -= 1;
    }
    
    printf("Nasceu em %d \n", anoNasc);
    system("pause");

    return 0;
}