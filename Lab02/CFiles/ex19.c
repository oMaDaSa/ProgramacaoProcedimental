#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.
*/

int main(){
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if(x % 3 == 0 && !(x % 5 == 0)){
        printf("O numero %d e divisivel apenas por 3\n", x);
    }else if(x % 5 == 0 && !(x % 3 == 0)){
        printf("O numero %d e divisivel apenas por 5\n", x);
    }else if(x % 5 == 0 && x % 3 == 0){
        printf("O numero %d e divisivel por 3 e por 5\n", x);
    }else{
        printf("O numero %d não e divisivel por 3 nem por 5\n", x);
    }

    system("pause");
    return 0;
}