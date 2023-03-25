#include <stdio.h>
#include <stdlib.h>

/*
Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
    O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
    Chama-se equilátero o triângulo que tem três lados iguais;
    Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
    Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/

int main(){
    float a, b, c;

    printf("Digite 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);

    if((a > b + c) || (b > a + c) || (c > a + b)){
        printf("Valores nao podem definir um triangulo\n");
    }else{
        if(a == b && b == c){
            printf("Eh um triangulo equilatero\n");
        }else if((a == b) || (a == c) || (b == c)){
            printf("Eh um triangulo isosceles\n");
        }else{
            printf("Eh um triangulo escaleno\n");
        }
    }

    system("pause");
    return 0;
}