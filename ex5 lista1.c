#include <stdio.h>
#include <stdlib.h>

/*A granja Frangotech possui um controle automatizado de cada frango da sua produção.
No pé direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar o tipo de alimento
que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50,
faça um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */

void main()
{
    int quantfrango;
    float custochip, custoalimento, total;
    printf("\nDigite o numero de frangos da granja: ");
    scanf("%d",&quantfrango);
    custochip = quantfrango*4;
    custoalimento = (quantfrango*2)*3.50;
    total = custochip + custoalimento;
    printf("\nCusto de chips: %.2f\nCusto de anel de alimento: %.2f\nCusto total: %.2f",custochip, custoalimento, total);
}
