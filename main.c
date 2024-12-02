/*desarrolar un programa que me permita ingresar una frase maximo de 50 caracteres y que me determine el numero de palabras de un afrase ingresada y determinar el numero de caracteres de la palabra mas pequeña y el numero de caractereres del numero mas grande*/
#include <stdio.h>
#include <string.h>
#include"funciones.h"
  
#define MAX_LENGTH 50
#define MAX_WORDS 10

void eliminar_salto_de_linea(char *frase);
void calcular_estadisticas(char *frase, int *num_palabras, int *min_len, int *max_len);

int main() {
    char frase[MAX_LENGTH];
    int num_palabras = 0;
    int min_len = MAX_LENGTH;
    int max_len = 0;

    printf("Ingresa una frase (max 50 caracteres y 10 palabras): ");
    fgets(frase, MAX_LENGTH, stdin);
    eliminar_salto_de_linea(frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\n') {
            num_palabras++;
        }
    }
    num_palabras++;

    if (num_palabras > MAX_WORDS) {
        printf("Error: La frase excede el máximo de %d palabras.\n", MAX_WORDS);
        return 1;
    }

    calcular_estadisticas(frase, &num_palabras, &min_len, &max_len);
    printf("Numero de palabras: %d\n", num_palabras);
    printf("Longitud de la palabra mas corta: %d\n", min_len);
    printf("Longitud de la palabra mas grande: %d\n", max_len);

    return 0;
}