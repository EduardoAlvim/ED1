#include <stdio.h>
#include <stdlib.h>

/*Faça  um  algoritmo  que  leia  a  idade  de  uma  pessoa  expressa  em  dias  e
mostre-a expressa em anos, meses e dias. Defina que todos os meses têm 30 dias. */

void main()
{
    int anos, meses, dias, diasr;
    printf("\nDigite a quantidade de dias de vida que voce tem: ");
    scanf("%d",&dias);
    anos=dias/360;
    dias=dias % 360;
    meses=dias / 30;
    diasr=dias % 30;
    printf("\nSua idade e Anos: %d Meses: %d Dias: %d",anos, meses, diasr);
}
