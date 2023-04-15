#include <stdio.h>

/*Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de
exponenciação.*/

double pow(int x, int z);

int main(){
    int num1, num2;
    float total;

    printf("Insira o valor de X: ");
    scanf("%d",&num1);
    printf("Insira o valor de Z: ");
    scanf("%d", &num2);

    total = pow(num1, num2);
    printf("X^Z: %.4f", total);
    return 0;
}

double pow(int x, int z){
    float total = x;

    if(z == 0){
        total = 1;
    }else{
        if(z < 0){
            for(int i = 1; i < -z; i++){
             total *= x;
            }
            total = 1.0/total;
        }else{
            for(int i = 1; i < z; i++){
                total *= x;
            }
        }
    }
    return total;
}

