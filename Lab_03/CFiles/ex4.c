#include <stdio.h>

/*
Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
*/

int main(){
  int x = 0;

  while(x<=100000){
    printf("%d\n",x);
    x += 1000;
  }

  return 0;
}