#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.
*/

int main(){
    float a, b, media;
    printf("Insira a nota 1: ");
    scanf("%f",&a);
    
    printf("Insira a nota 2: ");
    scanf("%f",&b);

    if((a < 0 || a > 10) || (b < 0 || b > 10)){
        printf("Nota invalida\n");
    }
    else{
        media = (a + b)/2;
        printf("Nota media = %.2f\n",media);
    }

    system("pause");
    return 0;
}