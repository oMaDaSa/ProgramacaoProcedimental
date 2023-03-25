#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba três números e mostre-os em ordem crescente.
*/

int main(){
    float a, b, c;

    printf("Digite os numeros a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a <= b && a < c){ //se a é o menor
        printf("%.2f\n", a);
        if(b < c){
            printf("%.2f\n", b);
            printf("%.2f\n", c);
        }
        else{
            printf("%.2f\n", c);
            printf("%.2f\n", b);
        }
    }else if(b <= a && b <= c){ // se b é o menor
        printf("%f\n", b);
        if(a <= c){
            printf("%.2f\n", a);
            printf("%.2f\n", c);
        }
        else{
            printf("%.2f\n", c);
            printf("%.2f\n", a);
        }
    }else{ // se c é o menor
        printf("%f\n", c);
        if(a <= b){
            printf("%.2f\n", a);
            printf("%.2f\n", b);
        }
        else{
            printf("%.2f\n", b);
            printf("%.2f\n", a);
        }
    }

    system("pause");
    return 0;
}