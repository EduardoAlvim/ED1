#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que preencha um vetor com dez números inteiros, calcule e mostre a
quantidade de números negativos e a soma dos números positivos. */

void main()
{
    int vet[10], quant=0, soma=0;
    for(int i = 0; i< 10; i++)
    {
        printf("\nValor na posicao: %d",i);
        scanf("%d",&vet[i]);
    }
    for(int i = 0; i< 10; i++)
    {
        if(vet[i]>=0)
        {
            soma = soma + vet[i];
        }
        else{
            quant++;
        }
    }
    printf("\nQuantidade de numeros negativos: %d \nSoma numeros positivos: %d",quant, soma);
}
