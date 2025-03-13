// Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar.

#include <stdio.h>

int main(void) {
    int numero, contagem;
    contagem = 0;

    do {
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        if (numero > 0) {
            contagem++;
        }
    } while (numero != 0);

    printf("Quantidade de numeros positivos: %d", contagem);
    return 0;
}