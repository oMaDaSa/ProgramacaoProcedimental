#include <stdio.h>
#include <math.h>
const float pi = 3.141592;

/*Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2*/

float media(float a, float b, float c, char operacao);

int main(){
    float nota1, nota2, nota3, resultado;
    char operacao;

    printf("Insira as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Insira o tipo de media ['p' - ponderada] ou ['a' - aritmetica]: ");
    scanf(" %c",&operacao);

    resultado = media(nota1, nota2, nota3, operacao);

    if(resultado < 0)return 0;
    else printf("Media = %.2f\n",resultado);

    return 0;
}

float media(float a, float b, float c, char operacao){
    float resultado;
    switch (operacao)
    {
        case 'a':
        case 'A':
            resultado = (a+b+c)/3;
            return resultado;
            break;
        case 'p':
        case 'P':
            resultado = (a*5+b*3+c*2)/(5+3+2);
            return resultado;
            break;
        default:
            printf("Operacao invalida\n");
            return 0;
    }
}