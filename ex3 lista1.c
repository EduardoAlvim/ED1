#include <stdio.h>
#include <stdlib.h>

/*O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica  com  a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor. */

void main()
{
    float custof, custo, pdd, imp;
    printf("\nDigite o custo de fabrica do carro: ");
    scanf("%f",&custof);
    pdd = custof*(28/100);
    imp = custof*(45/100);
    custo = custof + pdd + imp;
    printf("\nO custo de seu carro sera: %.2f",custo);
}
