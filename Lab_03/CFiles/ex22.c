#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois 
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois 
dígitos é 9009 = 91*99
*/

int main(){
    int prod, inverso, tmp, i, j;
    float raiz;
    for(i = 999; i  >= 100; i--){
        for(j = 999; j >= 100; j--){
            prod = i * j;
            tmp = prod;
            inverso = 0;
            while (tmp > 0) {
                inverso = (10 * inverso) + (tmp % 10);
                tmp /= 10;
            }
            if(inverso == prod){
                printf("%d * %d = %d\n", i, j, prod);
                printf("O maior palindromo eh : %d\n",inverso);
                system("pause");
                return 0;
            }
        }
    }
}