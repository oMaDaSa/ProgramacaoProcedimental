#include <stdio.h>
#include <string.h>

/*Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
informação estava errada.*/

struct dados{
    char nome[100], endereco[100], cidade[50], cep[10], email[100];
    int dia, mes, ano;
};
typedef struct dados dados;

int validaData(int dd, int mm, int aa);
int validaCep(char *cep);
int validaEmail(char *email);

int main(){
    int valData, valCep, valEmail, erros = 3;
    dados pessoa;
    
    //leitura
    printf(" -Insira os dados- \n");
    printf("Nome: ");
    fflush(stdin);
    fgets(pessoa.nome, 100, stdin);
    
    printf("Endereco: ");
    fflush(stdin);
    fgets(pessoa.endereco, 100, stdin);

    printf("Cidade: ");
    fflush(stdin);
    fgets(pessoa.cidade, 50, stdin);

    printf("CEP: ");
    fflush(stdin);
    fgets(pessoa.cep, 10, stdin);

    printf("email: ");
    fflush(stdin);
    fgets(pessoa.email, 100, stdin);

    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pessoa.dia, &pessoa.mes, &pessoa.ano);

    //remove '\n'
    pessoa.nome[strlen(pessoa.nome)-1] = '\0';
    pessoa.endereco[strlen(pessoa.endereco)-1] = '\0';
    pessoa.cidade[strlen(pessoa.cidade)-1] = '\0';
    pessoa.cep[strlen(pessoa.cep)-1] = '\0';
    pessoa.email[strlen(pessoa.email)-1] = '\0';

    valData = validaData(pessoa.dia, pessoa.mes, pessoa.ano);
    valCep = validaCep(pessoa.cep);
    valEmail = validaEmail(pessoa.email);

    //print
    erros -= valCep + valEmail + valData;
    if(erros == 0){
        printf("\n");
        printf("Nome: %s\n",pessoa.nome);
        printf("Endereco: %s\n",pessoa.endereco);
        printf("Cidade: %s\n",pessoa.cidade);
        printf("CEP: %s\n",pessoa.cep);
        printf("Nascimento: %d/%d/%d\n",pessoa.dia, pessoa.mes, pessoa.ano);
        printf("Email: %s\n",pessoa.email);
    }else{
        printf("\nErros:\n");
        if(valData == 0) printf("Data invalida\n");
        if(valCep == 0) printf("CEP invalido\n");
        if(valEmail == 0) printf("email invalido\n");
    }
    return 0;
}

int validaData(int dd,int mm,int aa){
    int val = 1, bissexto = 0;

    //verifica se o ano eh bissexto
    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)){
        bissexto = 1;
    }

    //verifica a validade da data
    if(mm < 1 || mm > 12){
        val = 0;
    }else if(dd < 1 || dd > 31){
        val = 0;
    }else if(mm == 2 && bissexto == 1 && dd > 29){
        val = 0;
    }else if(mm == 2 && bissexto == 0 && dd > 28){
        val = 0;
    }else if((mm == 4 || mm == 6 || mm == 9 || mm == 11 ) && dd > 30){
        val = 0;
    }

    return val;
}

int validaCep(char *cep){
    int val = 1;
    for(int i = 0; cep[i] != '\0'; i++){
        if(cep[i] <  '0' || cep[i] > '9'){
            val = 0;
            break;
        }
    }
    return val;
}

int validaEmail(char *email){
    int val = 1, arrobas = 0;
    for(int i = 0; email[i] != '\0'; i++){
        if(email[i] ==  '@' ){
           arrobas++;
        }
    }

    if(arrobas >= 2 || arrobas == 0){
        val = 0;
        return val;
    }

    printf("%s\n", email + (strlen(email) - 4));
    if(strcmp(email + (strlen(email) - 4), ".com") != 0 && strcmp(email + (strlen(email) - 7), ".com.br") != 0){
        val = 0;
        return val;
    }

    return val;
}