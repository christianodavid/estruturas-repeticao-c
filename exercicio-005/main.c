// Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1 centímetro por ano. Elabore um programa que conte quantos anos serão necessários para que a altura de Charlinho ultrapasse a de Bossa.

#include <stdio.h>

int main(void) {
    double altura_charlinho, altura_bossa;
    int anos;

    anos = 0;
    altura_charlinho = 140;
    altura_bossa = 145;

    while (altura_charlinho <= altura_bossa) {
        anos++;
        altura_charlinho += 2.1;
        altura_bossa += 1.1;
    }

    printf("Serao necessarios %d anos.", anos);

    return 0;
}