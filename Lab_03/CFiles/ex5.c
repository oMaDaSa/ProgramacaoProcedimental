#include <stdio.h>

/*
5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

int main(){
  int x, soma = 0;

  for(int i = 1; i <= 10; i++){
    printf("Insira o valor %d: ",i);
    scanf("%d",&x);
    soma += x;
  }

  printf("soma: %d",soma);
    
  return 0;
}