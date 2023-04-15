#include <stdio.h>

/*Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/

int totalSeg(int horas, int minutos, int segundos);

int main(){
    int hor, min, seg, totalSegundo;
    printf("Insira o horario [hh mm ss]: ");
    scanf("%d %d %d", &hor, &min, &seg);
    totalSegundo = totalSeg(hor, min, seg);

    printf("Total em segundos eh %d\n", totalSegundo);
    return 0;
}

int totalSeg(int horas, int minutos, int segundos){
    int totalSegundos = horas*60*60 + minutos*60 + segundos; 
    return totalSegundos;
}