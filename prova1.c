#include <stdio.h>  
#include <stdlib.h>


int main() {
    int a;
    int valor;
    int* p;

    valor = 19;
    int* pp;
    pp = &valor;
    p = pp;
    a = 10;
    *pp = a;
    *p = 5;

    printf("valor: %d\n", valor);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);
    printf("pp: %p\n", pp);
    printf("*pp: %d\n", *pp);
    printf("a: %d\n", a);

    return 0;
}