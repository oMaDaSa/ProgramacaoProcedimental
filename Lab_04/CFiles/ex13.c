#include <stdio.h>

/*Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão.*/

float calculadora(float a, float b, char operador);

int main(){
    float num1, num2, resultado;
    char operador;
    printf("Insira dois valores: ");
    scanf("%f %f",&num1,&num2);
    printf("Insira a operacao [+,-,*,/]: ");
    scanf(" %c",&operador);

    resultado = calculadora(num1, num2, operador);
    printf("%.2f %c %.2f = %.2f ",num1, operador, num2, resultado);

    return 0;
}

float calculadora(float a, float b, char operador){
    float resultado;
    switch (operador)
    {
        case '+':
            resultado = a + b;
            return resultado;
            break;
        case '-':
            resultado = a - b;
            return resultado;
            break;
        case '*':
            resultado = a * b;
            return resultado;
            break;
        case '/':
            resultado = a / b;
            return resultado;
            break;
        default:
            printf("Operador invalido\n");
            return 0;
    }
}