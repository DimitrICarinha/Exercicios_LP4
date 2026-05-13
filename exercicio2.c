//Crie um programa que calcula o comprimento de uma string (nao use a funcao strlen)

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int cont=0;

    printf("Nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome)-1] = '\0';

    while(nome[cont]!='\0')
        cont++;

    printf("\n%d caracteres",cont);

    return 0;
}
