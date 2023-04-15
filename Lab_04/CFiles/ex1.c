#include <stdio.h>

/*Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

int dobro(int num);

int main(){
    int num;
    printf("insira um valor inteiro: ");
    scanf("%d",&num);
    printf("drobro = %d\n", dobro(num));
    return 0;
}

int dobro(int a){
    int dobro = a*2;
    return dobro;
}