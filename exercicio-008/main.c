// Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o algoritmo deve mostrar o cálculo do primeiro número elevado ao segundo. Ao final, o algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira o caractere "s", o algoritmo solicita novamente dois números e mostra novamente a potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado.

#include <stdio.h>
#include <math.h>

int main(void) {
    double A, B, resultado;
    char opcao;

    do {
        printf("Digite o primeiro numero: \n");
        scanf("%lf", &A);
        fflush(stdin);
        printf("Digite o segundo numero: \n");
        scanf("%lf", &B);
        fflush(stdin);
        resultado = pow(A, B);
        printf("A elevado a B: %lf\n", resultado);

        printf("Deseja repetir a operacao? (S/N)\n");
        scanf("%c", &opcao);
        fflush(stdin);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}