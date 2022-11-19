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

void imprimirLista(CELULA **lista){
    CELULA *auxiliar = (*lista);
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

int inserirInicio(CELULA **lista, int elemento){
    CELULA *novaCelula = criarCelula();
    if(novaCelula == NULL){
        printf("\nErro: Memoria cheia!");
        return 0;
    }
    if(listaVazia(lista)){
        return inserirFim(lista, elemento);
    }
    novaPessoa->info = elemento;
    novaPessoa->next = (*lista);
    (*lista) = novaCelula;
    return 1;
}

int inserirFim(PESSOA **lista, int elemento){
    CELULA *novaCelula;
    CELULA *auxiliar;

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
    CELULA *auxiliar;

    PESSOA removido;
    strcpy(removido.nome, " ");
    removido.matricula = 1;

    if(listaVazia(lista)){
        printf("\nErro: Lista vazia!");
        return removido;
    }

    removida = (*lista)
    removido = (*lista)->info;

    free(removida);
    return removido;
}

PESSOA removerFim(CELULA **lista){
    CELULA *removida;
    CELULA *anterior;

    PESSOA removido = criarPessoa("", -1);

    if(listaVazia(lista)){
        printf("\nErro: Lista vazia!");
        return removido;
    }

    if(auxiliar->next == NULL){
        return removerInicio(lista);
    }

    removido = (*lista);

    while(removida->next != NULL){
        anterior = removida;
        removida = removida->next;
    }

    removido = removida->info;
    anterior->next = NULL;
    free(removida);
    return removido;
}

CELULA *pesquisarMatricula(CELULA **lista, int mat){
    CELULA *auxiliar;

    if(listaVazia(lista)){
        printf("\nErro: Lista vazia!");
        return NULL;
    }

    auxiliar = (*lista);
    while(auxiliar != NULL){
        if(auxiliar->info.matricula == mat){
            return auxiliar;
        }
        auxiliar = auxiliar->next;
    }
    return NULL;
}

PESSOA removerMatricula(PESSOA **Lista){
    CELULA *removida;
    CELULA *anterior;
    PESSOA pRemover = criarPessoa("", -1);

    if(listaVazia(lista)){
        printf("\nErro: Lista vazia!");
        return pRemover;
    }

    removida = pesquisarMatricula(lista, mat);
    if(removida == NULL){
        printf("\nErro: Matricula nao encontrada!");
        return pRemover;
    }

    if(removida == (*lista)){
        return removerInicio(lista);
    }

    pRemover = removida->info;

    anterior = (*lista);
    while(anterior->next != removida){
        anterior = anterior->next;
    }

    anterior->next = removida->next;
    free(removida);
    return pRemover;
}

int main(){
    PESSOA temp;
    CELULA *ptrlista, *tempCel;
    inicializarLista(&ptrlista);

    strcpy(temp.nome, "Jose");
    temp.matricula = 1;

    tempCel = pesquisarMatricula(&ptrlista, 2);
    if(tempCel == NULL){
        printf("\nMatricula nao encontrada!");
    } else {
        printf("\nMatricula encontrada!");
    }

    inserirFim(&ptrlista, temp);
    imprimirLista(&ptrlista);

    tempCel = pesquisarMatricula(&ptrlista, 2);
    if(tempCel == NULL){
        printf("\nMatricula nao encontrada!");
    } else {
        printf("\nMatricula encontrada!");
    }

    strcpy(temp.nome, "Maria");
    temp.matricula = 2;

    inserirFim(&ptrlista, temp);
    imprimirLista(&ptrlista);

    strcpy(temp.nome, "Joao");
    temp.matricula = 4;

    tempCel = pesquisarMatricula(&ptrlista, 2);
    if(tempCel != NULL){
        printf("\nMatricula nao encontrada!");
    } else {
        printf("\nMatricula encontrada!");
    }

    inserirInicio(&ptrlista, temp);
    imprimirLista(&ptrlista);

    temp = removerMatricula(&ptrlista, 4);
    imprimirLista(&ptrlista);

    liberarLista(&ptrlista);
    imprimirLista(&ptrlista);

    return 0;
}

int menu(){
    printf("===============MENU================\n");
    printf("0 - Sair\n");
    printf("1 - Verificar se está vazia\n");
    printf("2 - Inserir pessoa no fim\n");
    printf("3 - Inserir pessoa no inicio\n");
    printf("4 - Imprimir lista de pessoas\n");
    printf("5 - Remover pessoa do inicio\n");
    printf("6 - Remover pessoa do fim\n");
    printf("7 - Pesquisar pessoa por matricula\n");
    printf("8 - Remover pessoa por matricula\n");
}
