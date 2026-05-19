//Faca um programa que leia uma palavra e some 1 no valor ASCII de cada caractere da palavra.

#include <stdio.h>
#include <string.h>

int main(){
    char texto[50];

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto) - 1] = '\0';

    for(int l = 0; l < strlen(texto); l++){
        texto[l] += 1;
    }

    printf("%s", texto);

    return 0;
}