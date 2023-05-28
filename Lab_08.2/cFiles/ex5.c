#include <stdio.h>
#include <string.h>

/*Elabore um programa que receba duas strings digitadas pelo usuário e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.*/

int stringDentro(char *p1, char *p2);

int main(){
    char str1[100], str2[100];
    char *p1 = &str1[0], *p2 = &str2[0];
    
    printf("Insira a String1: ");
    fgets(str1, 100, stdin);
    *(p1+strlen(p1)-1) = '\0'; //remove '\n' da string 1;

    printf("Insira a String2: ");
    fgets(str2, 100, stdin);
    *(p2+strlen(p2)-1) = '\0'; //remove '\n' da string 2;

    if(stringDentro(p1, p2) == 1) printf("String2 corre dentro da String1\n");
    else printf("String2 nao corre dentro da String1\n");
    
    return 0;
}

int stringDentro(char *p1, char *p2){
    int i, j, correDentro = 0, valido, len1 = strlen(p1), len2 = strlen(p2);
    for(i = 0; i <= len1 - len2; i++){
        for(j = 0; j < len2; j++){
            valido = 0;
            if(*(p2+j) == *(p1+i+j)){
                valido = 1;
            }
            else{
                valido = 0; 
                break;
            }
        }
        if(valido == 1){
            correDentro = 1; 
            break;
        } 
    }
    return correDentro;
}