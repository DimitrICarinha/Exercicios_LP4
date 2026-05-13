//Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
//pessoa e a palavra “ACEITA”, caso contrario imprimir “NAO ACEITA”.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int sexo, idade;

    printf("Nome: ");
    fgets(nome,sizeof(nome), stdin);
    nome[strlen(nome) -1] = '\0';

    printf("Sexo(Masculino = 1/Feminino = 2): ");
    scanf("%d", &sexo);
    while(sexo != 1 && sexo != 2){
        printf("Sexo(Masculino = 1/Feminino = 2): ");
        scanf("%d", &sexo);
    }

    printf("Idade: ");
    scanf("%d", &idade);

    if(idade <= 25 && sexo == 2){
        printf("\nNome: %s", nome);
        printf("\nACEITA");
    }
    else
        printf("NAO ACEITA");

    return 0;
}