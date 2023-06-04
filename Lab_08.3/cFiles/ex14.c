#include <stdio.h>
#include <math.h>

/*Implemente uma função que calcule as raízes de uma equação do segundo
grau do tipo, Essa função deve ter como valor de retorno o número de raízes reais e
distintas da equação. Se existirem raízes reais, seus valores devem ser
armazenados nas variáveis apontadas por X1 e X2.*/

int quadratica(float *x1, float *x2, float a, float b, float c);

int main(){
    float x1, x2, a, b ,c;
    int qtdRaizes;

    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%f", &b);
    printf("Insira o valor de c: ");
    scanf("%f", &c);

    qtdRaizes = quadratica(&x1, &x2, a, b, c);
    if(qtdRaizes == 0){
        printf("Nao existem  raizes reais\n");
    }else if(qtdRaizes == 1){
        printf("Raiz unica x1 = %.2f\n", x1);
    }else{
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

}

int quadratica(float *x1, float *x2, float a, float b, float c){
    float delta, qtd = 0;

    delta = (b*b) - (4 * a * c);

    if(delta == 0){
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = *x1;
        qtd += 1;
    }
    else if(delta > 0){
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        qtd += 2;
        return qtd;
    }

    return qtd;
}