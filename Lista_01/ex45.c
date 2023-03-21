#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.
*/

int main()
{
    char LETRA, letra;

    printf("Insira uma letra maiuscula: ");
    scanf("%c", &LETRA);
    
    letra = LETRA + 32;

    printf("%c \n", letra);
    system("pause");

    return 0;
}