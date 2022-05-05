#include <stdio.h>
#include <stdlib.h>

/*Um motorista deseja colocar no seu tanque X reais de gasolina.
Escreva um algoritmo para  ler  o  preço  do  litro  da  gasolina  e  o  valor  do pagamento,
e  exibir  quantos  litros  ele conseguiu  colocar no tanque. */

void main()
{
    float litro, valor;
    int quantlitros;
    printf("\nDigite o preco do litro da gasolina: ");
    scanf("%f",&litro);
    printf("\nDigite o valor do pagamento: ");
    scanf("%f",&valor);
    quantlitros = valor/litro;
    printf("\nQuantidade de litros: %d",quantlitros);
}
