#include <stdio.h> 
#include <stdlib.h>
#define MAX_TAM 10

void ex01() {
    // crie uma função para imprimir todos os elementos da lista
    typedef struct sLista {
        char elem[MAX_TAM];
        int ultimo;
    }Lista;

    void inicializarLista(Lista *lista) {
        lista->ultimo = -1;
    }

    Lista *lista = (Lista *) malloc(sizeof(Lista));
    inicializarLista(lista);

    int listaCheia(Lista *lista) {
        if(lista->ultimo == (MAX_TAM - 1)){
            return 1;
        }
        return 0;
    }

    int listaVazia(sLista *lista) {
        if(lista->ultimo == -1){
            return 1;
        };
        return 0;
    }

    int inserirFim(Lista *lista, char elem) {
        if(listaCheia(lista)){
            printf("Lista cheia!");
            return 0;
        }
        lista->ultimo++;
        lista->elem[lista->ultimo + 1] = elem;
        return 1;
    }

    imprimirLista(Lista *lista) {
        if(listaVazia(lista)){
            printf("Lista vazia!");
            return 0;
        }
        for(int i = 0; i < lista->ultimo; i++) {
            printf("%c", lista->elem[i]);
        }
    }
}


void ex02(){
    // crie uma função para inserir um elemento em uma posição k informada pelo usuário
    typedef struct sLista {
        char elem[MAX_TAM];
        int ultimo;
    }Lista;

    void inicializarLista(Lista *lista) {
        lista->ultimo = -1;
    }

    Lista *lista = (Lista *) malloc(sizeof(Lista));
    inicializarLista(lista);

    int listaCheia(Lista *lista) {
        if(lista->ultimo == (MAX_TAM - 1)){
            return 1;
        }
        return 0;
    }

    int listaVazia(sLista *lista) {
        if(lista->ultimo == -1){
            return 1;
        };
        return 0;
    }

    int inserirFim(Lista *lista, char elem) {
        if(listaCheia(lista)){
            printf("Lista cheia!");
            return 0;
        }
        lista->ultimo++;
        lista->elem[lista->ultimo + 1] = elem;
        return 1;
    }

    int inserirElemento(Lista *lista, char elem, int posicao) {
        if(listaCheia(lista)){
            printf("Lista cheia!");
            return 0;
        }
        if(posicao > lista->ultimo){
            printf("Posição inválida!");
            return 0;
        }
        lista->ultimo++;
        for(int i = lista->ultimo; i > posicao; i--) {
            lista->elem[i] = lista->elem[i - 1];
        }
        lista->elem[posicao] = elem;
        return 1;
    }
}

void ex03(){
    // crie uma função para inverter uma lista
    typedef struct sLista {
        char elem[MAX_TAM];
        int ultimo;
    }Lista;

    void inicializarLista(Lista *lista) {
        lista->ultimo = -1;
    }

    Lista *lista = (Lista *) malloc(sizeof(Lista));
    inicializarLista(lista);

    int listaCheia(Lista *lista) {
        if(lista->ultimo == (MAX_TAM - 1)){
            return 1;
        }
        return 0;
    }

    int listaVazia(sLista *lista) {
        if(lista->ultimo == -1){
            return 1;
        };
        return 0;
    }

    int inserirFim(Lista *lista, char elem) {
        if(listaCheia(lista)){
            printf("Lista cheia!");
            return 0;
        }
        lista->ultimo++;
        lista->elem[lista->ultimo + 1] = elem;
        return 1;
    }

    int inverterLista(Lista *lista) {
        if(listaVazia(lista)){
            printf("Lista vazia!");
            return 0;
        }
        char aux;
        for(int i = 0; i < lista->ultimo; i++) {
            aux = lista->elem[i];
            lista->elem[i] = lista->elem[lista->ultimo - i];
            lista->elem[lista->ultimo - i] = aux;
        }
        return 1;
    }
}

void ex04(){
    //crie uma função para ordenar a lista
    typedef struct sLista {
        char elem[MAX_TAM];
        int ultimo;
    }Lista;

    void inicializarLista(Lista *lista) {
        lista->ultimo = -1;
    }

    Lista *lista = (Lista *) malloc(sizeof(Lista));
    inicializarLista(lista);

    int listaCheia(Lista *lista) {
        if(lista->ultimo == (MAX_TAM - 1)){
            return 1;
        }
        return 0;
    }

    int listaVazia(sLista *lista) {
        if(lista->ultimo == -1){
            return 1;
        };
        return 0;
    }

    int inserirFim(Lista *lista, char elem) {
        if(listaCheia(lista)){
            printf("Lista cheia!");
            return 0;
        }
        lista->ultimo++;
        lista->elem[lista->ultimo + 1] = elem;
        return 1;
    }

    int ordenarLista(Lista *lista) {
        if(listaVazia(lista)){
            printf("Lista vazia!");
            return 0;
        }
        char aux;
        for(int i = 0; i < lista->ultimo; i++) {
            for(int j = 0; j < lista->ultimo; j++) {
                if(lista->elem[j] > lista->elem[j + 1]){
                    aux = lista->elem[j];
                    lista->elem[j] = lista->elem[j + 1];
                    lista->elem[j + 1] = aux;
                }
            }
        }
        return 1;
    }

}


int main() {
    int opcao;
    char elem;
    int posicao;
    do {
        printf("1 - Inserir elemento no final da lista");
        printf("2 - Inserir elemento em uma posição específica da lista");
        printf("3 - Inverter a lista");
        printf("4 - Ordenar a lista");
        printf("5 - Sair");
        scanf("%d", &opcao);
    } switch (opcao) {
        case 1:
            printf("Digite o elemento que deseja inserir: ");
            scanf("%c", &elem);
            inserirFim(lista, elem);
            break;
        case 2:
            printf("Digite o elemento que deseja inserir: ");
            scanf("%c", &elem);
            printf("Digite a posição que deseja inserir o elemento: ");
            scanf("%d", &posicao);
            inserirElemento(lista, elem, posicao);
            break;
        case 3:
            inverterLista(lista);
            break;
        case 4:
            ordenarLista(lista);
            break;
        case 5:
            printf("Saindo...");
            break;
        default:
            printf("Opção inválida!");
            break;
    }
} while (opcao != 5); 
return 0;

