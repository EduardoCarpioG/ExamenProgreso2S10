#include <stdio.h>
#include "funciones.h"
#include <string.h> 
#define MAX_LENGTH 50
#define MAX_WORDS 10
void calcular_estadisticas(char *frase, int *num_palabras, int *min_len, int *max_len) {
    int i = 0, len = 0;
    *num_palabras = 0;
    *min_len = MAX_LENGTH;
    *max_len = 0;
    int in_word = 0;

    while (frase[i] != '\0') {
        if (frase[i] == ' ' || frase[i] == '\n') {
            if (in_word) {
                if (len < *min_len) {
                    *min_len = len;
                }
                if (len > *max_len) {
                    *max_len = len;
                }
                (*num_palabras)++;
                len = 0;
                in_word = 0;
            }
        } else {
            len++;
            in_word = 1;
        }
        i++;}
    if (in_word) {
        if (len < *min_len) {
            *min_len = len;
        }
        if (len > *max_len) {
            *max_len = len;
        }
        (*num_palabras)++;
    }
    if (*num_palabras == 0) {
        *min_len = 0;
    }}
void eliminar_salto_de_linea(char *frase) {
    int i = 0;
    while (frase[i] != '\0') {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
        i++;
}}