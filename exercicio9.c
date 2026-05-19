//Escreva um pprograma que substitua as ocorrencias do caracter 0 por 1.

#include <stdio.h>
#include <string.h>

int main(){
    char numero[50];

    printf("Digite: ");
    fgets(numero,sizeof(numero),stdin);
    numero[strlen(numero) -1] = '\0';

    for(int l = 0; l < strlen(numero); l++){
        if(numero[l] == '0'){
            numero[l] = '1';
        }
    }

    printf("%s", numero);

    return 0;
}