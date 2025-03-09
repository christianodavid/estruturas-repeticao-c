// Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B.

#include <stdio.h>

int main(void) {
    int A, B, i;

    printf("Digite o valor de A: \n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    printf("Numeros entre %d e %d: \n", A, B);

    for (i = A + 1; i < B; i++) {
        printf("%d ", i);
    }
    return 0;
}