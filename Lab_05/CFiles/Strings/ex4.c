#include <stdio.h>

/*Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.*/

int isVowel(char i);
int countVowel(char *string);
void printVowelsChanged(char *string, char c);

int main(){
    char palavra[100], substitui;
    int vogais;
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);
    vogais = countVowel(palavra);
    printf("Insira um caracter para substituir as vogais: ");
    fflush(stdin);
    scanf("%c", &substitui);
    printf("%d vogais foram substituidas por '%c'\n", vogais, substitui);
    printVowelsChanged(palavra, substitui);

    return 0;
}

isVowel(char i){
    switch (i)
    {
    case 'a':
    case 'A':
        return 1;
        break;
    case 'e':
    case 'E':
        return 1;
        break;
    
    case 'i':
    case 'I':
        return 1;
        break;
    
    case 'o':
    case 'O':
        return 1;
        break;

    case 'u':
    case 'U':
        return 1;
        break;
    
    default:
        return 0;
        break;
    }
}

countVowel(char *string){
    int vowels = 0, i;
    for(i = 0; string[i] != '\0'; i++){
        if(isVowel(string[i])) vowels++;
    }
    return vowels;
}

printVowelsChanged(char *string, char c){
    for(int i = 0; string[i] != '\0'; i++){
        if(isVowel(string[i])) string[i] = c;
    }
    printf("%s", string);
}