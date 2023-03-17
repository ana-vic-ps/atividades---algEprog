#include <stdio.h>

/*Questão 2 - Faça um programa que pergunte qual o raio de um círculo, calcule e imprima a sua área.*/

int main (){

    float raio, area, pi = 3.1415;

    printf("Digite o raio do círculo em questão: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área do círculo é: %0.2f", area);

}