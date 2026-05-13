// Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
// (maiuscula ou minuscula).

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome)-1] = '\0';
    
    if(nome[0] == 'a' || nome[0] == 'A')
    printf("\nNome: %s", nome);
    else
        printf("Nao comecou com a letra 'A'. ");

    return 0;
}