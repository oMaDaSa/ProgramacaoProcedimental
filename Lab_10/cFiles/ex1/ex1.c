#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que:
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres nesse arquivo, até
que o usuário entre com o caractere ‘0’;
c) Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela
todos os caracteres armazenados.*/

int main(){
    FILE *arq;
    char inputChar, getChar;
    arq = fopen("arq.txt","w");
    do{
        printf("Insira um caracter: ");
        setbuf(stdin,NULL);
        scanf("%c", &inputChar);
        if(inputChar != '0') putc(inputChar, arq);
    }while(inputChar != '0');
    fclose(arq);

    arq = fopen("arq.txt","r");
    while((getChar = getc(arq)) != EOF){
        printf("%c",getChar);
    }
    fclose(arq);
    return 0;
}