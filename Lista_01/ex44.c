#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/

int main()
{
    float hDegrau, qtdDegraus, hTotal;

    printf("Insira a altura do degraus em cm: ");
    scanf("%f", &hDegrau);
    printf("Insira a altura total desejada em m:");
    scanf("%f", &hTotal);
    qtdDegraus = (hTotal*100) / hDegrau;
    printf("Quantidade de degraus necessarios: %.2f degraus \n", qtdDegraus);
    system("pause");

    return 0;
}