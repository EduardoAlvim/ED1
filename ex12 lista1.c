#include <stdio.h>
#include <stdlib.h>

/*Criar um algoritmo que receba a idade o estado civil (C – casado, S – solteiro, V – viúvo
e D – desquitado ou separado) de várias pessoas. Calcule e imprima:
• A quantidade de pessoas casadas;
• A quantidade de pessoas solteiras;
• A média das idades das pessoas viúvas;
• A porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
analisadas.
O algoritmo acaba quando se digita um número menor do que O para idade. */

void main()
{
    int idade, contc=0, conts=0,contv=0, contd=0, total=0, acmv=0;
    char estado;
    float mediav, por;
    do
    {
        printf("\nDigite a idade: ");
        scanf("%d",&idade);
        printf("\nDigite o estado civil: ");
        fflush(stdin);
        scanf("%c",&estado);
        if(estado == 'C' || estado == 'c')
        {
            contc++;
            total++;
        }
        else if(estado == 'S' || estado == 's')
        {
            conts++;
            total++;
        }
        else if(estado == 'V' || estado == 'v')
        {
            contv++;
            acmv = acmv + idade;
            total++;
        }
        else if(estado == 'D' || estado == 'd')
        {
            contd++;
            total++;
        }
    }
    while(idade > 0);
    if(contv != 0)
    {
        mediav = acmv / contv;
    }
    if(contd != 0)
    {
        por = ((float)contd/(float)total) * 100;
    }
    printf("\nQuantidade de pessoas casadas: %d \nQuantidade de pessoas solteiras: %d \nMedia das idades das pessoas viúvas: %f \nPorcentagem de pessoas desquitadas: %f",contc,conts,mediav,por);
}
