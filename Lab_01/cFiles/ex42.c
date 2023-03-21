#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
de imposto sobre o salário-base.
*/
int main()
{
    float salarioBase, salarioFinal;
    printf("Insira o salario base: ");
    scanf("%f", &salarioBase);
    salarioFinal = (salarioBase * 0.98); // == (salarioBase * 1.05) - (salarioBase * 0.07)
    printf("Salario Final = %.2f reais \n",salarioFinal);
    system("pause");
    return 0;
}