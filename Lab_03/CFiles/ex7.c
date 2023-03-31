#include <stdio.h>

/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/

int main(){
  int x, soma = 0;
  float med;
  
  for(int i = 1; i <= 10; i++){
    printf("Insira o valor %d: ",i);
    scanf("%d",&x);
    if(x>0){
      soma += x;
    }
  }
  med = soma/10;
  printf("media: %.2f",med);
    
  return 0;
}