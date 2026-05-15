//Crie um programa que compara duas strings

#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    char b[50];

    printf("Escreva: ");
    fgets(a,sizeof(a),stdin);
    a[strlen(a) -1] = '\0';

    printf("Escreva: ");
    fgets(b,sizeof(b),stdin);
    b[strlen(b) -1] = '\0';

    if (strcmp(a, b) == 0) {
        printf("Igual!\n");
    } else 
        printf("Diferente\n");
    
    return 0;
}