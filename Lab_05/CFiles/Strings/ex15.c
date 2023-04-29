#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*. 
Faça um programa que contenha um menu com as seguintes opções:
a) Ler uma string S1 (tamanho máximo 20 caracteres);
b) Imprimir o tamanho da string S1;
c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o 
resultado da comparação;
d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da 
concatenação;
e) Imprimir a string S1 de forma reversa;
f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse 
ser informado pelo usuário;
g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os 
caracteres C1 e C2 serão lidos pelo usuário;
h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo 
usuário;
i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de 
qual posição deve ser criada a substring e qual é o tamanho da substring.
*/

char imprimeMenu();
int compareString(char *string1, char *string2);
void concatString(char *string1, char *string2, char *string3);
void reverseString(char *string1, char *string2);
int countChar(char *string1, char c);
void substitue(char *string1, char c1, char c2);
int isSubstring(char *string1, char *string2);
void substring(char *string1, char * string3, int pos, int tamanho);

int main(){
    char string1[20], string2[20], string3[40], c1, c2;
    int pos, tamanho;
    char menuOption;

    while((menuOption = imprimeMenu()) != '0'){
        switch(menuOption){
            case 'a':
            case 'A':
                printf("Insira a string S1: ");
                fflush(stdin);
                fgets(string1, 20, stdin);
                system("pause");
                break;
            case 'b':
            case 'B':
                printf("O tamanho da string S1 eh de %d caracteres\n", (int)(strlen(string1)-1));
                system("pause");
                break;
            case 'c':
            case 'C':
                printf("Insira a string S2: ");
                fflush(stdin);
                fgets(string2, 20, stdin);
                if(compareString(string1, string2)) printf("S1 e S2 sao iguais\n");
                else printf("S1 e S2 sao diferentes\n");
                system("pause");
                break;
            case 'd':
            case 'D':
                printf("Insira a string S2: ");
                fflush(stdin);
                fgets(string2, 20, stdin);
                concatString(string1, string2, string3);
                printf("%s", string3);
                system("pause");
                break;
            case 'e':
            case 'E':
                reverseString(string1, string3);
                printf("%s\n", string3);
                system("pause");
                break;
            case 'f':
            case 'F':
                printf("Insira o caracter a contar: ");
                fflush(stdin);
                scanf("%c", &c1);
                printf("'%c' aparece %d vez(es) em S1\n", c1, countChar(string1, c1));
                system("pause");
                break;
            case 'g':
            case 'G':
                printf("Insira o caracter a ser substituido em S1: ");
                fflush(stdin);
                scanf("%c", &c1);
                printf("Insira o caracter a substituir '%c' em S1: ", c1);
                fflush(stdin);
                scanf("%c", &c2);
                substitue(string1, c1, c2);
                printf("%s", string1);
                system("pause");
                break;
            case 'h':
            case 'H':
                printf("Insira a string S2: ");
                fflush(stdin);
                fgets(string2, 20, stdin);
                if(isSubstring(string1, string2)) printf("S2 eh substring de S1\n");
                else printf("S2 nao eh substring de S1\n");
                system("pause");
                break;
                break;
            case 'i':
            case 'I':
                printf("Insira a posicao da substring de S1: ");
                scanf("%d", &pos);
                printf("Insira a o tamanho da substring de S1: ");
                scanf("%d", &tamanho);
                substring(string1, string3, pos, tamanho);
                printf("%s", string3);
                system("pause");
                break;
                break;
        }
    }
    return 0;
}

char imprimeMenu(){
    char menuOption;
    do{
        printf("a - Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("b - Imprimir o tamanho da string S1\n");
        printf("c - Comparar a string S1 com uma nova string S2 \n");
        printf("d - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n");
        printf("e - Imprimir a string S1 de forma reversa\n");
        printf("f - Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("g - Substituir a primeira ocorrencia de um caractere da string S1 por outro caractere\n");
        printf("h - Verificar se uma string S2 eh substring de S1\n");
        printf("i - Retornar uma substring da string S1. Informar a partir de qual posicao deve ser criada a substring e o tamanho da substring\n");
        printf("0 - Finalizar o programa\n");
        printf("Insira a operacao desejada: ");
        fflush(stdin);
        scanf("%c", &menuOption);
    }while(!((menuOption >= 'a' && menuOption <= 'i') || (menuOption >= 'A' && menuOption <= 'I') || menuOption == '0'));
    return menuOption;
}

int compareString(char *string1, char *string2){
    for(int i=0; string1[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            return 0;
        }
    }
    return 1;
}

void concatString(char *string1, char *string2, char *string3){
    int i, j;
    for(i = 0; string1[i] != '\0'; i++){
        string3[i] = string1[i];
    }
    for(j = 0; string2[j] != '\0'; j++){
        string3[i+j-1] = string2[j];
    }
}

void reverseString(char *string1, char *string2){
    int i, j = 0;
    for(i = strlen(string1)-2; string1[i] >= 0; i--){
        string2[j] = string1[i];
        j++;
    }
    string2[i] = '\0';
}

int countChar(char *string1, char c1){
    int count = 0, i;
    for(i = 0; string1[i] != '\0'; i++){
        if(string1[i] == c1) count++;
    }
    return count;
}

void substitue(char *string1, char c1, char c2){
    int i = 0;
    for(i = 0; string1[i] != '\0'; i++){
        if(string1[i] == c1){
            string1[i] = c2;
            break;
        }
    }
}

int isSubstring(char *string1, char *string2){
    int i, j;
    int tm1 = strlen(string1) - 1, tm2 = strlen(string2) - 1;
    char string3[tm2+2];
    for(i = 0; i < tm1-tm2+1; i++){
        for(j = 0; j < tm2; j++){
            string3[j] = string1[j+i];
        }
        string3[j] = '\n';
        string3[j+1] = '\0';
        if(compareString(string2, string3)) return 1;
    }
    return 0;
}

void substring(char *string1, char * string3, int pos, int tamanho){
    int i = pos, j = 0;
    for(i = pos; i < pos+tamanho; i++){
        string3[j] = string1[i];
        j++;
    }
    string3[j] = '\n';
    string3[j+1] = '\0';
}