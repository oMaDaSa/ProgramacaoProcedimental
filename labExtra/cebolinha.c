#include <stdio.h>
#include <string.h>

void cebolinha(char *passa, char *recebe);

int main(){
    char fala1[200], fala2[200];
    fgets(fala1, 200, stdin);
    cebolinha(fala1, fala2);
    printf("%s", fala2);
    return 0;
}

void cebolinha(char *passa, char *recebe){
    int i,j;
    for(i = 0, j = 0; passa[i] != '\0'; i++, j++){
        if((passa[i] == 'r') && (passa[i+1] >= 'a' &&  passa[i+1]<= 'z')){
            recebe[j] = 'l';
        }else if((passa[i] == 'R') && ((passa[i+1] >= 'A' &&  passa[i+1]<= 'Z'))){
            recebe[j] = 'L';
        }
        else recebe[j] = passa[i];
        if((passa[i] == 'r' && passa[i+1] == 'r') || (passa[i] == 'R')){
            i++;
        }
    }
}