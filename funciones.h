#ifndef funciones_h
#define funciones_h
 
#define MAX_LENGTH 50
#define MAX_WORDS 10
void eliminar_salto_de_linea(char *frase);
void calcular_estadisticas(char *frase, int *num_palabras, int *min_len, int *max_len);
#endif