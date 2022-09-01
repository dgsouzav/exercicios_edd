#include <stdio.h>
#include <stdlib.h>

void ex01() {
    int cont = 1;
    float numero, maior, menor;

    while (cont <= 12) {
        printf("Digite um numero real: \n");
        scanf("%f", &numero);

        if(cont == 1) {
            maior = numero;
            menor = maior;
        } else if(numero > maior) {
            maior = numero;
        } else if(numero < menor) {
            menor = numero;
        }
        cont++;
    }
    printf("\nMaior numero: %f", &maior);
    printf("\nMenor numero: %f", &menor);

    //getch();
}

void ex02() {
    int num = -1;
    float resp = 0;

    for(int i = 1; i <= 50; i++) {
        num = num + 2;
        resp = resp + (num/i);
    }
    printf("A resposta é: %f\n");
}

void ex03() {
    float soma, numero, qtdNumero;

    while (numero != 0 ) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        soma += numero;
        qtdNumero++;
    }
    printf("%2f", soma);
    printf("\nQuantidade de numeros %.0f", qtdNumero);
}

void ex04() {
    int i;

    for(int i = 1000; i < 1999; i++){
        if(i % 13 == 5);

        printf("Esses são os numeros: %d");
    }
}

void ex05() {
    long int fibonacci(int n);
    main() {
        int n;

        printf("Escolha a posicao: ");
        scanf("%d", &n);

        printf("Posicao %d da sequencia: %d", n, fibonacci(n))
    }
}

void ex06() {
    int numero, soma_par=0, soma_impar=0, cont=1;

    do(cont <= 12) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }
        
        if(numero %2 == 0) {
            soma_par += numero;
        }else {
            soma_impar += numero;
        }
    }while(1);
    printf("A soma dos numeros pares é: %d\n", soma_par);
    printf("A soma dos numeros ímpares é: %d\n", soma_impar);

    return 0;
}

void ex07() {
    float n1, n2, n3, n4, n5, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    printf("Digite a nota 5: ");
    scanf("%f", &n5);

    media = (n1 + n2 + n3 + n4 + n5) / 5;

    printf("Média aritimética: %.2f", media);
}

void ex08() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    for (int i = 0, num = n + 1 + (n % 2); i < n; i++, num += 1) {
        printf("%d", num);

        if(numero % 4 == 0 && numero % 7 != 0) {
        printf("O numero informado é divisivel por 4.\n");
    }else if(numero % 7 == 0) {
        printf("O numero informado é divisivel por 7.\n");
    }else if(numero % 4 == 0) {
        printf("O numero informado é divisivel por 4 e 7.\n");
    }
    }

}

void ex09() {
    float jose = 1.07, rafo = 1.35;
    int ano = 0;

    while(jose >= rafo) {
        jose += 0.02;
        jose += 0.03;

        ano++;

        printf("Josevaldo: %.2f\tRafonildo: %.2f\tAno: %d\n", jose, rafo, ano);
    }
    printf("São necessários %d anos\n\n", ano);
}

void ex10() {
    int x, n, potencia, contador;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &x);

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    potencia = 1;
    contador = 0;

    while(contador != n){
        potencia = potencia * x;
        contador = contador + 1;
    }
    printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
    
    return 0;
}