#include <stdio.h>
#include <stdlib.h>

/*
 Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/

int main(){
    float a,b,h, area;

    printf("Insira a base maior: ");
    scanf("%f", &a);
    printf("Insira a base menor: ");
    scanf("%f", &b);
    printf("Insira a altura maior: ");
    scanf("%f", &h);
    
    if(a > 0 && b > 0){
        area = ((a+b)*h)/2;
        printf("Area do trapezio: %.2f\n", area);
    }else printf("Valores invalidos\n");
    

    system("pause");
    return 0;
}