// Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo que N! = N * (N-1) * (N-2) * … * 3 * 2 * 1.

#include <stdio.h>

int main(void) {
    int i, N, fatorial;

    printf("Digite o valor de N: \n");
    scanf("%d", &N);

    fatorial = 1;

    for (i = N; i >= 1; i--) {
        fatorial *= i;
    }

    printf("%d! = %d", N, fatorial);

    return 0;
}