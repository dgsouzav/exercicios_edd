#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h> 

#define SEMANAS 4.5


void ex01() {
    float valorHora, percentualDesconto, salarioLiq;
    int horas;

    printf("Entre com valor recebido por hora:\n");
    scanf("%f", &valorHora);
    
    printf("Entre com o numero de horas trabalhadas na semana:\n");
    scanf("%d", &horas);

    printf("Entre com percentual de desconto do INSS:\n");
    scanf("%f", &percentualDesconto);

    salarioLiq = ((valorHora * horas) * SEMANAS) * 1 - (percentualDesconto);
    printf("O salario é de R$ %.2f mensais. \n");
}

void ex02() {
    float n1, n2, n3, n4, n5, mediaArt;
    int p1, p2, p3, p4, p5, somaPesos;

    printf("Entre com os 5 pontos flutuantes");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

    printf("Entre com os 5 pesos correspondentes");
    scanf("%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5);

    somaPesos = (p1 + p2 + p3 + p4 + p5);
    mediaArt = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4 + n5 * p5);

    printf("A media calculada foi de %.2f. \n", mediaArt);
}

void ex03() {
    int numero;

    printf("Entre com um numero inteiro: \n");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero %d ao quadrado é igual a %d.\n", numero, numero * 2);
    } else if (numero > 0)
        printf("O numero zero foi digitado");

}

void ex04() {
    int minutos, velMed;
    float distancia;

    printf("Entre com o tempo de deslocamento em minutos: \n");
    scanf("%d", &minutos);

    printf("Entre com a velocidade media em km/h: \n");
    scanf("%d", velMed);

    distancia = velMed * (minutos/60);

    printf("A distancia total pecorrida foi de %.2f km/h.\n", distancia);
}

void ex05() {
    int numero;

    printf("Entre com um numero inteiro"); 
    scanf("%d", numero);

    if(numero % 4 == 0 && numero % 5 != 0) {
        printf("O numero informado e divisivel por 4.\n");
    }
    else if(numero % 5 == 0) {
        printf("O numero informado e divisivel por 5.\n");
    }
    else if(numero % 4 == 0) {
        printf("O numero informado e divisivel por 4 e 5.\n");
    }
    else {
        printf("O numero informado nao e divisivel por 4, nem por 5.\n");
    }
}

void ex06() {

    int x1, x2, delta;
    float A, B, C;

    printf("Entre com os coeficientes da equaçao\n");
    scanf("%f %f %f",&A,&B,&C);

    delta = B * B - 4. * A * C;

    if (delta >= 0) {
        x1 = (-B + sqrt(delta))/(2.*A);
        x2 = (-B - sqrt(delta))/(2.*A);
        printf("A equacao dada e: %f X^2 + %f X + %f\n", A,B,C);
        printf("As raizes reais sao: 1a. raiz = %f 2a.raiz= %f\n", x1, x2);
    }
    else {
        printf("Nao existem raizes reais");
    }
    getch();
}
