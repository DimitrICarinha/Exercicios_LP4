//Faca um programa que receba uma palavra e calcule quantas vogais tem e entre com um caracter para substituir.

#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    char caracter;
    int cont = 0;

    printf("Texto: ");
    fgets(texto,sizeof(texto),stdin);
    texto[strcspn(texto, "\n")] = '\0';
    
    printf("Digite uma letra para substituir as vogais: ");
    scanf("%c", &caracter);

    for(int l = 0; l < strlen(texto); l++){
        if(texto[l] == 'a' || texto[l] == 'e' || texto[l] == 'i' || texto[l] == 'o' || texto[l] == 'u' || 
           texto[l] == 'A' || texto[l] == 'E' || texto[l] == 'I' || texto[l] == 'O' || texto[l] == 'U'){
            
            cont++;
            printf("%c", caracter);
        }
        else{
            printf("%c", texto[l]);
        }
    }
    printf("\nTem %d vogais", cont);
    
    return 0;
}