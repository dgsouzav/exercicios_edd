#include <stdio.h>
#include <stdlib.h>


typedef struct sPessoa {
    char nome[50];
    char matricula[10];
    int idade;
    float altura;

} PESSOA;

void incializarLista (PESSOA **lista) {
    (*lista) = NULL;
}

int verificarListaVazia(PESSOA **lista){
    if ((*lista) == NULL) {
        return 1;
    }
    return 0;
}

void imprimirLista(PESSOA **lista){
    PESSOA *auxiliar = (*lista);
        if(listaVazia(lista)){
            printf("Lista vazia!");
        } else {
            printf("\nLista: ")
            while(auxiliar != NULL){
                imprimirElemento(auxiliar->info);
                auxiliar = auxiliar->next;
        }
        printf("\n");
    }
}

int inserirInicio(PESSOA **lista, int elemento){
    PESSOA *nocaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nErro: Memoria cheia!");
        return 0;
    }
    if(listaVazia(lista)){
        return inserirFim(lista, elemento);
    }
    novaCelula->info = elemento;
    novaCelula->next = (*lista);
    (*lista) = novaCelula;
    return 1;
}

int inserirFim(PESSOA **lista, int elemento){
    PESSOA *novaCelula;
    PESSOA *auxiliar;

    novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nErro: Memoria cheia!");
        return 0;
    }

    novaCelula->info = elemento;
    novaCelula->next = NULL;

    if(listaVazia(lista)){
        (*lista) = novaCelula;
        return 1;
    }

    auxiliar = (*lista);

    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }

    auxiliar->next = novaCelula;
    return 1;
}

PESSOA removerInicio(PESSOA **lista){
    PESSOA *auxiliar;

    PESSOA removido;
    strcpy(removido.nome, " ");
    removido.matricula = 1;

    if(listaVazia(lista)){
        printf("\nErro: Lista vazia!");
        return removido;
    }

    removida = (*lista)
    removida = (*lista)->info;

    free(removida);
    return removido;
}






