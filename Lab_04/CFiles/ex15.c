#include <stdio.h>

/*Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo
que:
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

int formaTriangulo(float a,float b,float c);
void tipoTriangulo(float a,float b,float c);

int main(){
    float ladoA, ladoB, ladoC;

    printf("Insira as medidas dos 3 lados: ");
    scanf("%f %f %f",&ladoA, &ladoB, &ladoC);

    if(formaTriangulo(ladoA, ladoB, ladoC) == 0){
        printf("Lados nao formam um triangulo\n");
        return 0;
    }else{
        printf("Eh um triangulo ");
        tipoTriangulo(ladoA, ladoB, ladoC);
    }

    return 0;
}

int formaTriangulo(float a,float b,float c){
    if (a >= b + c || b >= a + c || c >= a + b) return 0;
    else return 1;
}

void tipoTriangulo(float a,float b,float c){
    if (a == b && b == c) printf("equilatero\n");
    else if (a == b || a == c || b == c) printf("isoceles\n");
    else printf("escaleno\n");
}

