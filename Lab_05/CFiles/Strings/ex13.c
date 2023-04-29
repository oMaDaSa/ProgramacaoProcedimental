#include <stdio.h>
#include <string.h>

/*Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando 
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita 
para a esquerda como da esquerda para a direita.*/

int ehPalindromo(char *s);
void removeSpacesSpecialsUppers(char *s, char *newString);

int main(){
    char string[100];
    printf("Insira um texto/palavra: ");
    fgets(string, 100, stdin);
    if(ehPalindromo(string)) printf("Eh palindromo\n");
    else printf("Nao eh palindromo\n");
    
    return 0;
}

int ehPalindromo(char *s){
    char newString[strlen(s)];
    removeSpacesSpecialsUppers(s, newString);
    int palindromo = 1, tamanho = strlen(newString);
    for(int i = 0; i < tamanho; i++){
        if(newString[i] != newString[tamanho-i-1]){
            palindromo = 0;
            break;
        }
    }
    return palindromo;
}

void removeSpacesSpecialsUppers(char *oldString, char *newString){
    int j = 0;
    for(int i = 0; oldString[i] != '\0'; i++){
        if(oldString[i] >= 97 && oldString[i] <= 122){
            newString[j] = oldString[i];
            j++;
        }else if(oldString[i] >= 65 && oldString[i] <= 90){
            newString[j] = oldString[i] + 32;
            j++;
        }
    }
    newString[j] = '\0';
}