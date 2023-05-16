#include <stdio.h>

/*
Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

struct horario{
    int h;
    int m;
    int s;
};

struct data{
    int d;
    int m;
    int a;
};
typedef struct data data;

struct compromisso{
    struct data data;
    struct horario hora;
    char desc[100];
};
typedef struct compromisso compromisso;

int main(){
    struct horario horario;
    struct data data;
    struct compromisso compromisso;

    //criar compromisso:
    printf("Insira o horario (hh mm ss) do compromisso: ");
    scanf("%d %d %d",&horario.h, &horario.m, &horario.s);
    printf("Insira a data (dd mm aa) do compromisso: ");
    scanf("%d %d %d",&data.d, &data.m, &data.a);
    compromisso.data = data;
    compromisso.hora = horario;
    printf("Insira a descricao do compromisso: ");
    fflush(stdin);
    fgets(compromisso.desc, 100, stdin);

    //printa o compromisso
    printf("Compromisso agendado para %d/%d/%d, as %d:%d:%d - %s", compromisso.data.d, compromisso.data.m, compromisso.data.a, compromisso.hora.h, compromisso.hora.m, compromisso.hora.s, compromisso.desc);

    return 0;
}