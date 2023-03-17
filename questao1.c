#include <stdio.h>

/*Questão 1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do 
frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta 
qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

int main (){

    float custo, custoTotal, valorFreteEdespesas, valorVenda, lucro;
    int percentLucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete e despesas eventuais: ");
    scanf("%f", &valorFreteEdespesas);

    printf("\nDigite o valor de venda da mercadoria: ");
    scanf("%f", &valorVenda);

    custoTotal = custo + valorFreteEdespesas;

    lucro = valorVenda - custoTotal;

    percentLucro = (lucro / valorVenda) * 100;

    printf("\nA percentagem de lucro da mercadoria é: %i%%", percentLucro);


}