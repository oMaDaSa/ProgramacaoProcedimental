#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.*/

struct baralho{
    int ouros[14], espadas[14], paus[14], copas[14];
};
typedef struct baralho baralho;

//0 = ouros, 1 = espadas, 2 = paus, 3 = copas

struct mao{
    int naipe[3];
    int numero[3];
};
typedef struct mao mao;

int main(){
    struct baralho baralho;
    struct mao mao[2];
    int i, j, valido, naipe, numero;
    srand(time(NULL));

    //reseta baralho (todas as cartas no baralho)
    for(int i=0; i<13; i++){
        baralho.ouros[i]=1;
        baralho.espadas[i]=1;
        baralho.paus[i]=1;
        baralho.copas[i]=1;
    }

    //sorteia
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            valido = 1;
            do{
                naipe = rand()%4;
                numero = rand()%13 + 1;

                //checa se a carta ainda está no baralho e entrega ao jogador
                switch(naipe){
                    case 0:
                        if(baralho.ouros[numero] == 0){
                            valido = 0; 
                        }else{
                            baralho.ouros[numero]--;
                            mao[i].naipe[j] = naipe;
                            mao[i].numero[j] = numero;
                        }
                        break;
                    case 1:
                        if(baralho.espadas[numero] == 0){
                            valido = 0; 
                        }else{
                            baralho.espadas[numero]--;
                            mao[i].naipe[j] = naipe;
                            mao[i].numero[j] = numero;
                        }
                        break;
                    case 2:
                        if(baralho.paus[numero] == 0){
                            valido = 0; 
                        }else{
                            baralho.paus[numero]--;
                            mao[i].naipe[j] = naipe;
                            mao[i].numero[j] = numero;
                        }
                        break;
                    case 3:
                        if(baralho.copas[numero] == 0){
                            valido = 0; 
                        }else{
                            baralho.copas[numero]--;
                            mao[i].naipe[j] = naipe;
                            mao[i].numero[j] = numero;
                        }
                        break;
                }
            }while(valido == 0);
        }
    }

    //printa maos
    for(i = 0; i < 2; i++){
        printf("Mao %d:\n", i+1);
        for(j = 0; j < 3; j++){
            switch(mao[i].naipe[j]){
                case 0: printf("%d de Ouros\n", mao[i].numero[j]); break;
                case 1: printf("%d de Espadas\n", mao[i].numero[j]); break;
                case 2: printf("%d de Paus\n", mao[i].numero[j]); break;
                case 3: printf("%d de Copas\n", mao[i].numero[j]); break;
            }
        }
        printf("\n");
    }
   
    return 0;
}