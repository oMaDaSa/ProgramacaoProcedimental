#include <stdio.h>

/*Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/

long long int factorial(int n);

int main(){
    int num;
    long long int total;

    printf("Insira um valor inteiro positivo: ");
    scanf("%d",&num);

    total = factorial(num);
    printf("%d! = %lld",num ,total);
    return 0;
}

long long int factorial(int n){
    long long int total = n;
    if(n==1){
        return 1;
    }else{
        total *= factorial(n-1);
    }
    return total;
}