#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/

int main(){
    int estado;
    float valorInicial, valorFinal, imposto;

    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("opcao: ");
    scanf("%d", &estado);
    
    switch (estado)
    {
    case 1:
        imposto = 1.07;
        break;
    case 2:
        imposto = 1.12;
        break;
    case 3:
        imposto = 1.15;
        break;
    case 4:
        imposto = 1.08;
        break;
    default:
        printf("Estado invalido\n");
        system("pause");
        return 0;
    }        
    
    
    printf("Insira o valor inicial em reais: ");
    scanf("%f", &valorInicial);

    valorFinal = valorInicial * imposto;
    printf("Valor final eh %.2f reais\n", valorFinal);
    system("pause");
    return 0;
}