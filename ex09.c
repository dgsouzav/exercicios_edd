#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *t = malloc(sizeof(int));
    float x;
    float *pont;
    char letra;
    int *num;
    pont = malloc(sizeof(float));
    pont = &x;
    x = 4.5;
    letra = 'B';
    num = malloc(sizeof(int));
    *t = 9;
    float nota = 10;

    printf("Valor de x: %f \t Endereço de x: %p \t Conteúdo de pont: %p \t Valor de pont: %f \t Conteúdo de letra: %c \t Conteúdo de num: %p \t Valor de num: %p \t Conteúdo de t: %d \t Conteúdo de nota: %f", x, &x, pont, *pont, letra, num, *t, nota);
    return 0;
}