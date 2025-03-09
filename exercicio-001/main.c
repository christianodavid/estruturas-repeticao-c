// Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 e 10 (inclusive).

#include <stdio.h>

int main(void) {
    int i, soma;
    soma = 0;

    for (i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("Soma: %d", soma);
    return 0;
}