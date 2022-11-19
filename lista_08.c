#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sCell{
    int info;
    struct sCell *next;
} CELULA;

typedef struct sPessoa {
    char nome[50];
    char matricula[10];
} PESSOA;

void incializarLista (CELULA **lista) {
    (*lista) = NULL;
}

int verificarListaVazia(CELULA **lista){
    if ((*lista) == NULL) {
        return 1;
    }
    return 0;
}


void push(CELULA **topo, int elemento){
    CELULA *novaCelula = (CELULA*) malloc(sizeof(CELULA));
    if(novaCelula == NULL){
        printf("\nErro: Memoria cheia!");
        return;
    }
    novaCelula->info = elemento;
    novaCelula->next = (*topo);
    (*topo) = novaCelula;
}


int pop(CELULA **topo){
    CELULA *auxiliar;
    int elemento;
    if(verificarListaVazia(topo)){
        printf("\nErro: Pilha vazia!");
        return 0;
    }
    auxiliar = (*topo);
    elemento = auxiliar->info;
    (*topo) = auxiliar->next;
    free(auxiliar);
    return elemento;
}


void imprimirPilha(CELULA **topo){
    CELULA *auxiliar = (*topo);
    if(verificarListaVazia(topo)){
        printf("Pilha vazia!");
    } else {
        printf("\nPilha: ");
        while(auxiliar != NULL){
            printf("%d ", auxiliar->info);
            auxiliar = auxiliar->next;
        }
        printf("\n");
    }
}

int menu(){
    int opcao;
    printf("\nEscolha uma instrução: ");
    printf("\n1 - Inserir elemento no topo da pilha");
    printf("\n2 - Remover elemento do topo da pilha");
    printf("\n3 - Imprimir pilha");
    printf("\n4 - Sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);
    return opcao;
}