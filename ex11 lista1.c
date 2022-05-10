#include <stdio.h>
#include <stdlib.h>

/*Criar um algoritmo que receba o valor e o código de várias mercadoreias vendidas em
um determinado dia. Os códigos obedecem à lista a seguir:

´L´ - Limpeza
´A´- Alimentação
´H´- Higiene

Calcule e imprima:
• O total vendido naquele dia, com todos os códigos juntos;
• O total vendido naquele dia em cada um dos códigos.
Para encerrar a entrada de dados, digite o valor da mercadoria zero. */


void main()
{
    int total, limp=0, alim=0, hig=0, valor;
    char resp;
    do
    {
        printf("\nDigite a quantidade de determinada mercadoria: ");
        scanf("%d",&valor);
        printf("\nDigite o codigo da mercadoria: ");
        fflush(stdin);
        scanf("%c",&resp);
        if(resp == 'L' || resp == 'l'){
            limp = limp + valor;
        }
        else if(resp == 'A' || resp == 'a'){
            alim = alim + valor;
        }
        else if(resp == 'H' || resp == 'h'){
            hig = hig + valor;
        }
        total = total + valor;
    }
    while(valor != 0);
    printf("\nTotal vendido: %d \nTotal vendido codigo 'L': %d \nTotal vendido codigo 'A': %d \nTotal vendido codigo 'H': %d \n",total,limp,alim,hig);
}
