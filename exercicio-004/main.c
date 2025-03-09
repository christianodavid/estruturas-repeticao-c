// Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.

#include <stdio.h>

int main(void) {
    int N, i, resultado;

    printf("Digite um numero: \n");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        resultado = N * i;
        printf("%d * %d = %d\n", N, i, resultado);
    }

    return 0;
}