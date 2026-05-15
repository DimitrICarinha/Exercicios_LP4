//8. Faca um programa que conte o numero de 1’s que aparecem em um string. Exemplo:
//“0011001” -> 3

#include <stdio.h>
#include <string.h>

int main(){
    char numero[100];
    int cont = 0;

    printf("Digite o numero: ");
    fgets(numero,sizeof(numero),stdin);
    numero[strlen(numero) -1] = '\0';

    for(int l = 0; l < strlen(numero); l++){
        if(numero[l] == '1')
            cont++;
    }

    printf("O numero de 1's foi: %d", cont);

    return 0;
}