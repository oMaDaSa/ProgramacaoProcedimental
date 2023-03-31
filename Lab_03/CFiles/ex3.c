#include <stdio.h>

/*
Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
*/

int main(){
  int x = 10;

  while(x>=0){
    printf("%d\n",x);
    x--;
  }
  printf("Fim!");

  return 0;
}