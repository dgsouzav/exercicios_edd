#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct sPessoa {
    char nome[50];
    char matricula[10];
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
    PESSOA *nocaCelula = criarPessoa();
    if(novaPessoa == NULL){
        printf("\nErro: Memoria cheia!");
        return 0;
    }
    if(listaVazia(lista)){
        return inserirFim(lista, elemento);
    }
    novaPessoa->info = elemento;
    novaPessoa->next = (*lista);
    (*lista) = novaPessoa;
    return 1;
}

int inserirFim(PESSOA **lista, int elemento){
    PESSOA *novaPessoa;
    PESSOA *auxiliar;

    novaPessoa = criarPessoa();
    if(novaPessoa == NULL){
        printf("\nErro: Memoria cheia!");
        return 0;
    }

    novaPessoa->info = elemento;
    novaPessoa->next = NULL;

    if(listaVazia(lista)){
        (*lista) = novaPessoa;
        return 1;
    }

    auxiliar = (*lista);

    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }

    auxiliar->next = novaPessoa;
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

PESSOA removerFim(PESSOA **lista){
    PESSOA *removida;
    PESSOA *anterior;

    PESSOA *anterior;
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

PESSOA *pesquisarMatricula(PESSOA **lista, int mat){
    PESSOA *auxiliar;

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
    PESSOA *removida;
    PESSOA *anterior;
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
    PESSOA *ptrlista, *tempPes;
    inicializarLista(&ptrlista);

    strcpy(temp.nome, "Jose");
    temp.matricula = 1;

    tempPes = pesquisarMatricula(&ptrlista, 2);
    if(tempPes == NULL){
        printf("\nMatricula nao encontrada!");
    } else {
        printf("\nMatricula encontrada!");
    }

    inserirFim(&ptrlista, temp);
    imprimirLista(&ptrlista);

    tempPes = pesquisarMatricula(&ptrlista, 2);
    if(tempPes == NULL){
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

    tempPes = pesquisarMatricula(&ptrlista, 2);
    if(tempPes != NULL){
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




