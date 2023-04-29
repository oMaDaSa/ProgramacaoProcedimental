#include <stdio.h>

/*Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3*/

int countOnes(char vet[100]);

int main(){
    char binario[100];
    printf("Insira uma string de 0's e 1's: ");
    fgets(binario, 100, stdin);
    printf("Existem %d 1's na string\n", countOnes(binario));
    return 0;
}

int countOnes(char vet[100]){
    int ones = 0;
    for(int i=0; vet[i]!='\0'; i++){
        if(vet[i] == '1') ones++;
    }
    return ones;
}