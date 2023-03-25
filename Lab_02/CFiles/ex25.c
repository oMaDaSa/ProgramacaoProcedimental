#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Calcule as raízes da equação de 2º grau.
ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se delta >  0, imprima as duas raízes reais.
*/

int main(){
    float a, b, c, delta;
    float raiz1, raiz2;

    printf("ax2 + bx + c = 0\n");
    printf("Insira a: ");
    scanf("%f", &a);
    printf("Insira b: ");
    scanf("%f", &b);
    printf("Insira c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("Nao eh funcao de segundo grau\n");
        system("pause");
        return 0;
    }else{
        delta = (b*b) - (4 * a * c);
        if(delta < 0){
            printf("Nao existe raiz\n");
            system("pause");
            return 0;
        }else if(delta == 0){
            raiz1 = -b/(2*a);
            printf("Raiz unica de (%.2f)x^2 + (%.2f)x + (%.2f) = 0 eh %.2f\n", a, b, c, raiz1);
        }else{

            raiz1 = (-b + sqrt(delta))/(2*a);
            raiz1 = (-b - sqrt(delta))/(2*a);
            printf("As raizes de (%.2f)x^2 + (%.2f)x + (%.2f) = 0 sao %.2f e %.2f\n", a, b, c, raiz1, raiz2);
        }
    }

    system("pause");
    return 0;
}