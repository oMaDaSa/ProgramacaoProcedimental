#include <stdio.h>

/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

int main(){
    int a, *b = &a, **c = &b, ***d = &c;
    
    printf("Insira o valor de A: ");
    scanf("%d",b);

    printf("2 * A = %d\n", 2*(*b));
    printf("3 * A = %d\n", 3*(**c));
    printf("4 * A = %d\n", 4*(***d));
    return 0;
}