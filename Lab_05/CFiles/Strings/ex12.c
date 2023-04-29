#include <stdio.h>

/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria 
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça 
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. 
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

void encryptCesar(char *s);

int main(){
    char string[300];
    printf("Insira o texto a ser criptografado: ");
    fgets(string, 300, stdin);
    encryptCesar(string);
    printf("Texto criptografado: %s", string);
    return 0;
}

void encryptCesar(char *s){
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 3;
            if(s[i] > 90) s[i] -= 28;
        }else if(s[i] >= 97 && s[i] <= 122){
            s[i] += 3;
            if(s[i] > 122) s[i] -= 28;
        }
    }
}