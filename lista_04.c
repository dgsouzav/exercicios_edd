#include<stdio.h>
#include<stdlib.h>

// Faça um programa que leia dois números inteiros,
// armazenando-os em memória alocada dinamicamente e 
// depois escreva-os na tela.
void EX01() {
    int *num1, *num2;
    num1 = (int *) malloc(sizeof(int));
    num2 = (int *) malloc(sizeof(int));

    printf("Digite um numero: ");
    scanf("%d", num1);
    printf("Digite outro numero: ");
    scanf("%d", num2);

    printf("O primeiro numero digitado foi: %d", *num1);
    printf("O segundo numero digitado foi: %d", *num2);
}

// Faça um programa que leia n inteiros(definidos pelo usuário)
// armazenando-os em um vetor alocada dinamicamente.
void EX02() {
    int *vetor, n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        printf("O numero digitado foi: %d", vetor[i]);
    }
}

// Defina uma estrutura para armazenar um cadastro de 
// cliente: nome, idade e telefone. Peça ao usuário o número de 
// clientes e aloque dinamicamente na memória a quantidade de 
// estruturas necessárias. Em seguida, leia os dados destes clientes.
void EX03() {
    typedef struct cadastro {
        char nome[50];
        int idade;
        char telefone[15];
    } Cadastro;

    int n;
    struct cadastro * pt;

    printf("Digite o numero de clientes: ");
    scanf("%d", &n);

    pt = (struct cadastro *) malloc(n * sizeof(struct cadastro));

    for(int i = 0; i < n; i++) {
        printf("Digite o nome do cliente: ");
        scanf("%s", pt[i].nome);
        printf("Digite a idade do cliente: ");
        scanf("%d", &pt[i].idade);
        printf("Digite o telefone do cliente: ");
        scanf("%s", pt[i].telefone);
    }
}

// Aloque dinamicamente uma matriz de tamanho a ser informado pelo usuário.
// Preencha, imprima e depois libere a memória alocada.
void EX04() {
    int n, m;
    int **matriz;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas: ");
    scanf("%d", &m);

    matriz = (int **) malloc(n * sizeof(int *));

    for(int i = 0; i < n; i++) {
        matriz[i] = (int *) malloc(m * sizeof(int));
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;

}

// Crie um programa com uma struct para armazenar as informações de carros em uma garagem 
// de venda de veículos. Crie uma função externa ao main para realizar o cadastro 
// de um automóvel e outra para edição dos dados de um automóvel. A variável do tipo 
// struct de tamanho 100 deve obrigatoriamente ser declarada na main e passada como referência para a função.
void EX05() { 
    typedef struct carro {
        char marca[50];
        char modelo[50];
        int ano;
        char cor[20];
        float preco;
    } Carro;

    struct carro * pt;

    pt = (struct carro *) malloc(100 * sizeof(struct carro));

    for(int i = 0; i < 100; i++) {
        printf("Digite a marca do carro: ");
        scanf("%s", pt[i].marca);
        printf("Digite o modelo do carro: ");
        scanf("%s", pt[i].modelo);
        printf("Digite o ano do carro: ");
        scanf("%d", &pt[i].ano);
        printf("Digite a cor do carro: ");
        scanf("%s", pt[i].cor);
        printf("Digite o preco do carro: ");
        scanf("%f", &pt[i].preco);
    }

    for(int i = 0; i < 100; i++) {
        printf("Marca: %s Modelo: %s Ano: %d Cor: %s Preco: %.2f",
        pt[i].marca, pt[i].modelo, pt[i].ano, pt[i].cor, pt[i].preco);
}}


int main() {
    int opcao;

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            EX01();
            break;
        case 2:
            EX02();
            break;
        case 3:
            EX03();
            break;
        case 4:
            EX04();
            break;
        case 5:
            EX05();
            break;
        default:
            printf("Opcao invalida");
    }
    return 0;
}