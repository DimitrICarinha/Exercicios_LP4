//Faca um programa que receba uma string. e a imprima de traz pra frente

#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];

    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; //tira o \n de forma segura.

    for(int l = strlen(texto) - 1; l >= 0; l--){ // Começa em 'tamanho - 1' e vai até o índice '0' (l >= 0).
        printf("%c",texto[l]); // %c para um único caractere.
    }
    printf("\n");

    return 0;
}