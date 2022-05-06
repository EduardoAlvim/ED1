#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que receba:
•O código de um produto comprado, supondo que a digitação do código do produto seja sempre válida, ou seja, um número inteiro entre 1 e 10.
•O peso do produto em quilos.
•O código do país de origem, supondo que a digitação do código seja sempre válida, ou seja, um número inteiro entre 1 e 3.

Tabelas

Código do país de origem   Imposto
           1                  0%
           2                  15%
           3                  25%

Código do produto    Preço por Grama
      1 a 4                 10
      5 a 7                 25
      8 a 10                35

Calcule e mostre:

•O peso do produto convertido em gramas;
•O preço total do produto comprado;
•O valor do imposto, sabendo-se que ele é cobrado sobre o preço total do produto comprado e depende do país de origem;
•O valor total, preço total do produto mais imposto. */

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
    //preço total do produto comprado
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
