//ler string sem as vogais

#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    
    printf("Texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for(int l = 0; l < strlen(texto); l++){
        if(texto[l] == 'a' || texto[l] == 'e' || texto[l] == 'i' || texto[l] == 'o' || texto[l] == 'u' || 
           texto[l] == 'A' || texto[l] == 'E' || texto[l] == 'I' || texto[l] == 'O' || texto[l] == 'U'){
            
            continue;
        }
        else 
            printf("%c", texto[l]); 
    }
    
    printf("\n");
    
    return 0;
}