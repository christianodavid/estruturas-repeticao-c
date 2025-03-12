// Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que: a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00; b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial; c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro da porcentagem do ano anterior. Faça um programa que receba o ano atual e determine o salário atual desse funcionário.

#include <stdio.h>

int main(void) {
    double salario, novo_salario, porcentagem;
    int i, ano_atual;

    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);

    salario = 1000;
    porcentagem = 1.5/100;
    novo_salario = salario + (salario * porcentagem);

    for (i = 2017; i <= ano_atual; i++) {
        porcentagem *= 2;
        novo_salario = novo_salario + (novo_salario * porcentagem);
    }

    printf("O salario atual e R$%.2lf.", novo_salario);

    return 0;
}