#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que receba:
�O c�digo de um produto comprado, supondo que a digita��o do c�digo do produto seja sempre v�lida, ou seja, um n�mero inteiro entre 1 e 10.
�O peso do produto em quilos.
�O c�digo do pa�s de origem, supondo que a digita��o do c�digo seja sempre v�lida, ou seja, um n�mero inteiro entre 1 e 3.

Tabelas

C�digo do pa�s de origem   Imposto
           1                  0%
           2                  15%
           3                  25%

C�digo do produto    Pre�o por Grama
      1 a 4                 10
      5 a 7                 25
      8 a 10                35

Calcule e mostre:

�O peso do produto convertido em gramas;
�O pre�o total do produto comprado;
�O valor do imposto, sabendo-se que ele � cobrado sobre o pre�o total do produto comprado e depende do pa�s de origem;
�O valor total, pre�o total do produto mais imposto. */

void main()
{
    int codprod, codpais;
    float pesoprod, pesoprodg, precototal, precoimp, valortotal;
    printf("\nDigite o codigo do produto (1 a 10): ");
    scanf("%d",&codprod);
    printf("\nDigite o peso do produto em kilos: ");
    scanf("%f",&pesoprod);
    printf("\nDigite o codigo do pais (1 a 3): ");
    scanf("%d",&codpais);
    //peso em gramas
    pesoprodg = 1000*pesoprod;
    //pre�o total do produto comprado
    if( codprod == 1 && codprod <= 4){
        precototal = pesoprodg * 10;
    }
    else if(codprod ==5 && codprod <=7){
        precototal = pesoprodg * 25;
    }
    else if(codprod ==8 && codprod <=10){
        precototal = pesoprodg * 35;
    }
    //valor do imposto
    if(codpais == 1){
        precoimp = 0;
    }
    else if(codpais == 2){
        precoimp = precototal * 0.15;
    }
    else if (codpais ==3){
        precoimp = precototal * 0.25;
    }
    //valor total
    valortotal = precototal + precoimp;
    printf("\nPeso do produto em gramas: %.2f \nPreco total do produto comprado: %.2f \nValor do imposto: %.2f \nValor total: %.2f",pesoprodg,precototal,precoimp,valortotal);
}
