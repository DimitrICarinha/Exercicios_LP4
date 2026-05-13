// faca um programa que leia um nome e imprima as 4 primeiras letras do nome.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    
    printf("Nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';  
    //O strcspn retorna a posição da primeira ocorrência de um caractere específico, 
    //sendo usado para localizar e remover o \n (o "Enter") de uma string.

    for(int i = 0; i < 4 && nome[i] != '\0'; i++)
        printf("%c", nome[i]);

    return 0;
}
