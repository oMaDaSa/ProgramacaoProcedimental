#include <stdio.h>
#include <stdlib.h>

/*
Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996
*/

int main(){
    int ano;
    float a, b, res;

    printf("Insira o ano: ");
    scanf("%d", &ano);
    
    if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
        printf("O ano e bissexto\n");
    }else{
        printf("O ano nao e bissexto\n");
    }
    system("pause");
    return 0;
}