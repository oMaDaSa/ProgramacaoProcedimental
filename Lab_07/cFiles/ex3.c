#include <stdio.h>

/*
Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.
*/

int main(){
    int x, y;
    if(&x > &y) printf("%p (endereco de x) eh maior\n", &x);
    else printf("%p (endereco de y) eh maior\n", &y);
    return 0;
}