#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.
*/

int main()
{
    int hi, mi, si, hd, md, sd, hf, mf, sf;
    //i = inicio || d = duração || f = final

    printf("Insira o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &hi, &mi, &si);
    printf("Insira a duracao, em segundos, da experiencia: ");
    scanf("%d", &sd);

    //converte a duração em segundos
    hd = (sd/60)/60;
    sd = sd - (hd*60*60);
    md = sd/60;
    sd = sd - (md*60);

    //adiciona a duração à hora inicial
    hf = hi + hd;
    mf = mi + md;
    sf = si + sd;

    //corrige horarios incorretos
    if(sf >= 60){
        mf += sf/60;
        sf -= 60;
    }
    if(mf >= 60){
        hf += mf/60;
        mf -= 60;
    }
    if(hf >= 24){
        hf -= 24;
    }
    
    printf("%d:%d:%d \n", hf, mf, sf);
    system("pause");

    return 0;
}