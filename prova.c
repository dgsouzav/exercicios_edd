#include <stdio.h>
#include <stdlib.h>

void ordena(int *a, int *b, int *c) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*a > *c) {
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }
}

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    //chamada da função
    // printf("Em ordem crescente: %d %d %d", a, b, c);
    printf("Em ordem decrescente: %d %d %d", c, b, a);

    return 0;
}