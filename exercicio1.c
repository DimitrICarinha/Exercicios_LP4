//Faca um programa que entao leia uma string e a imprima

#include <stdio.h>
#include <string.h>

int main(){ 
    char texto[100];

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strlen(texto)-1] = '\0';
    printf("%s",texto);

    return 0;
}