#include <stdio.h>
#include <stdlib.h>

/*
As tarifas de certo parque de estacionamento são as seguintes:
 1a e 2a hora - R$1,00 cada;
 3a e 4a hora - R$1,40 cada;
 5a hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/

int main(){
    int hhChegada, mmChegada, hhSaida, mmSaida, hhTempo;
    int cvrtChegada, cvrtSaida, cvrtTempo;
    float valor = 0;
    
    printf("Digite o horario de chegada (hh mm): ");
    scanf("%d %d",&hhChegada,&mmChegada);
    printf("Digite o horario de saida (hh mm): ");
    scanf("%d %d",&hhSaida,&mmSaida);

    //converte os horarios em minutos
    cvrtChegada = hhChegada * 60 + mmChegada;
    cvrtSaida = hhSaida * 60 + mmSaida;

    //calcula o tempo permanecido em minutos
    if(cvrtChegada == cvrtSaida){
        cvrtTempo = 1440; //24 horas
    }else if(cvrtChegada < cvrtSaida){
        cvrtTempo = cvrtSaida - cvrtChegada;
    }else{
        cvrtTempo = 1440 + (cvrtSaida - cvrtChegada);
    }

    hhTempo = cvrtTempo/60;
    if(hhTempo%60){
        hhTempo++;
    }

    for(int i = 1; i < hhTempo; i++){
        if(i <= 2){
            valor += 1.00;
        }else if(i <= 4){
            valor += 1.40;
        }else{
            valor += 2.00;
        }
    }
    printf("Valor: R$%.2f\n", valor);
    system("pause");
    return 0;
}