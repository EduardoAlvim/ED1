#include <stdio.h>
#include <stdlib.h>

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
