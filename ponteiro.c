#include <stdio.h>
#include <stdlib.h>

/*
int main() {
	
    int *vetor1, vetor2 = 50; //*vetor1 = ponteiro
	char *letra1, letra2 = 'g';  //*letra1 = ponteiro

	vetor1 = &vetor2; //atribuindo end de memoria do vetor 2 à 1
    letra1 = &letra2; //atribuindo end de memoria de letra 2 à 1
    
	printf("valor da variavel valor2: %d\n", vetor2);
	printf("end da variavel valor2: %p\n", &vetor2);
	printf("end da variavel valor1: %p\n", vetor1);  
	printf("end apontado pela variavel valor1: %d\n", *vetor1); 

    printf("\nvalor da variavel letra2: %c\n", letra2);
	printf("end da variavel letra2: %p\n", &letra2);
	printf("end da variavel letra1: %p\n", letra1);  
	printf("end apontado pela variavel letra1: %c\n", *letra1); 

	return 0;
}

void imprimirVetor(int *v, int tam) {
	int i;
	for (i = 0; i < tam; i++) {  // percorre o vetor e imprime os valores
		printf("%d", *(v + i));
	}
	printf("\n");
}


void imprimirVetorLetras(char *v, int tam) {
	int i;
	for (i = 0; i < tam; i++) { // percorre o vetor de letras e imprime os valores
		printf("%c", *(v + i));
	}
	printf("\n");
}

void preencherVetorInt(int *v, int tam) {
	int i;
	for (i = 0; i < tam; i++) {  // percorre o vetor e preenche com valores
		printf("Digite o valor qualquer %d: ", i);
		scanf("%d", (v + i));
	}
}


int main() {
	int i, vet[10] = {0,1,2,3,4,5,6,7,8,9};
	char letras[10] = {'a','b','c','d','e','f','g','h','i','j'};

	// printf("%p\t%p\n", vet, &vet[0]);
	preencherVetorInt(vet, 10);
	imprimirVetor(vet, 10);
	imprimirVetorLetras(letras, 10);

	// for(i = 0; i < 10; i++) {
	// 	printf("%d ", *(vet + i)); // endereço de memória ou *vet para conteudo apontado(que é zero)
	// 	// *(vet + i) aritmetica de ponteiros
	// } 
} */


void soma10(int x) {
		x = x + 10;
		return;
	}

int main (void) {

	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);

	soma10(numero);

	printf("Agora o numero vale: %d\n", numero);

	return 0;
}
	
	
	
	
	// int x, *ptrx, **pptrx;

	// // iniciando a variavel x com zero
	// x = 0;

	// printf("\nValor de x: %d\n", x);
	// printf("Endereco de x: %p\n\n", &x);

	// // atribuindo o endereco de x ao ponteiro ptrx
	// ptrx = &x; // ptrx aponta para o endereço de x
	// pptrx = &ptrx; // pptrx aponta para o endereço de ptrx

	// printf("\nValor de x: %p\n", x);
	// printf("\nEndereco apontado por ptrx: %p\n", ptrx);
	// printf("Valor da variavel apontada por ptrx: %d\n", *ptrx);
	// printf("\nEndereco de ptrx: %p\n", &ptrx);

	// system("pause");



	// int valor = 27;

	// int *ptr;

	// ptr = &valor;

	// printf("Utilizando ponteiros\n\n");
	// printf("Conteudo da variavel valor: %d\n", *ptr);
	// printf("Endereco da variavel valor: %p\n", ptr);
	// printf("Conteudo da variavel ptr: %p\n", &ptr);

	// getchar();
	// return 0;
