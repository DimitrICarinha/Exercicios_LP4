// ou 

#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    int cont = 0;

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for(int l = 0; l < strlen(texto); l++){
        // Compara diretamente com o caractere de espaço
        if(texto[l] == ' '){
            cont++;
        }
    }

    printf("Numero de espacos em branco: %d\n", cont);

    return 0;
}