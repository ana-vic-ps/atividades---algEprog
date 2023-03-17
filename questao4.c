#include <stdio.h>

/*Questão 4 - Faça um programa em que o usuário digite 4 notas, em seguida, calcule e imprima a média entre eles.*/

int main(){

    float nota1, nota2, nota3, nota4, media; 


        printf("Digite a 1ª nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a 2ª nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a 3ª nota: ");
        scanf("%f", &nota3);

        printf("Digite a 4ª nota: ");
        scanf("%f", &nota4);

    system("cls");


    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nA média das notas é: %0.2f", media);

}