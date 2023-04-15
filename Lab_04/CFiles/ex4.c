#include <stdio.h>
#include <math.h>

/*Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...*/

int quadPerfeito(int num);

int main(){
    int num;
    printf("insira um valor inteiro: ");
    scanf("%d", &num);
    if(quadPerfeito(num)){
        printf("%d eh um quadrado perfeito\n", num);
    }else{
        printf("%d nao eh um quadrado perfeito\n",num);
    }
    return 0;
}

int quadPerfeito(int num){
    int raizInt = sqrt(num);
    if(num < 1){
        return 0;
    }else{
        if(raizInt * raizInt == num){
            return 1;
        }else{
            return 0;
        }
    }
}