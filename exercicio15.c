// escreva um programa para converter letras maiusculas em minusculas.

#include <stdio.h>
#include <string.h> 

int main(){
    char texto[100];

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto) -1] = '\0';

    for(int l = 0; l < strlen(texto); l++){
        if(texto[l] >= 'A' && texto[l] <= 'Z')  //for(int l = 0; l < strlen(texto); l++){ texto[l] = tolower(texto[l]);} 
            texto[l] += 32;                     //utilizando #include <ctype.h
    }

    printf("%s", texto);

    return 0;
}