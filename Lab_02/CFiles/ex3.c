#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado.
*/

int main(){
    float x;
    printf("Insira x: ");
    scanf("%f",&x);

    if(x>0) printf("A raiz de x eh:  %.2f\n",sqrt(x));
    else printf("x ao quadrado eh: %2.f\n", x*x);

    system("pause");
    return 0;
}