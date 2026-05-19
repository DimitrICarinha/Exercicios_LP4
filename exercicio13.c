//Ler uma frase e contar espacos em branco.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char texto[100];
    int cont = 0;

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for(int l = 0; l < strlen(texto); l++){
        if(isspace(texto[l])){
            cont++;
        }
    }

    printf("Numero de espacos em branco : %d\n", cont);

    return 0;
}
