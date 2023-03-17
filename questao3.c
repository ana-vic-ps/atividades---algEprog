#include <stdio.h>

/*Questão 3 - Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O 
programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão 
necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta 
por lata é de 2 litros.*/

int main(){

    float largura, altura, metrosQuadrados, litros;
    int quantLatas;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    metrosQuadrados = altura * largura;

    litros = metrosQuadrados * 300;

    quantLatas = litros / 2000;

    printf("A quantidade de latas necessárias para pintar a parede é: %i", quantLatas);

}