//Digite um nome, calcule e retorne quantas letras tem esse nome.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int cont = 0;

    printf("Nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome) -1] = '\0';

    while(nome[cont] != '\0'){
        cont++;
    }
    printf("\nO numero de letras eh: %d", cont);

    return 0;
}
