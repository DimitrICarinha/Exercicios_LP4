// exemplo de string

#include <stdio.h>
#include <string.h> 

int main(){
    
    char nome[50];
    int cont = 0;

    printf("Nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strlen(nome)-1] = '\0';
    printf("%s",nome);

    printf("\nN. de caracteres: %d",strlen(nome));

    return 0;
}



