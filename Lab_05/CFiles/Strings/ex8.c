#include <stdio.h>

/*Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário*/

void changeChar(char *string, char L1, char L2);

int  main(){
    char palavra[100], L1, L2;
    printf("Escreva: ");
    fgets(palavra, 100, stdin);
    fflush(stdin);
    printf("Insira o caracter a ser substituida: ");
    scanf("%c", &L1);
    fflush(stdin);
    printf("Insira o caracter que substituira: ");
    scanf("%c", &L2);
    changeChar(palavra, L1, L2);
    printf("%s", palavra);

    return 0;
}

void changeChar(char *string, char L1, char L2){
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == L1){
            string[i] = L2;
        }
    }
}