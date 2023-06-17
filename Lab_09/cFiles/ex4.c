#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário o tamanho de uma string e
chame uma função para alocar dinamicamente essa string. Em seguida,
o usuário deverá informar o conteúdo dessa string. O programa imprime
a string sem suas vogais.*/

int main(){
    int n, i;
    char *array;

    printf("Insira o tamanho da string: ");
    scanf("%d",&n);

    array = (char*)malloc((n+2)*sizeof(char));

    fflush(stdin);
    printf("Digite a string: ");
    fgets(array, n+2, stdin);

    for(i = 0; array[i] != '\0'; i++);
    array = (char*)realloc(array, (i)*sizeof(char));
    n = i;

    for(i = 0; i < n; i++){
        if(array[i] != 'a' && array[i] != 'e' && array[i] != 'i' && array[i] != 'o' && array[i] != 'u'){
            if(array[i] != 'A' && array[i] != 'E' && array[i] != 'I' && array[i] != 'O' && array[i] != 'U'){
                printf("%c",array[i]);
            }
        }
    }
    free(array);

    return 0;
}