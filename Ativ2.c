/* Leia duas strings e concatene-as, imprimindo o resultado.
Crie uma função para concatenar duas strings. */

#include <stdio.h>
#include <string.h>

void concatenarStrings(const char *str1, const char *str2, char *resultado) {
    strcpy(resultado, str1);  
    strcat(resultado, str2); 
}

int main() {
    char string1[50], string2[50], resultado[50];

    printf("Digite uma string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0'; 

    printf("Digite outra string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0'; 

    concatenarStrings(string1, string2, resultado);

    printf("Resultado: %s\n", resultado);
}