#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia um vetor com cinqüenta posições para números inteiros e
mostre somente os números positivos. */

void main()
{
    int vet[50];
    for(int i = 0; i< 50; i++)
    {
        printf("\nValor na posicao: %d",i);
        scanf("%d",&vet[i]);
    }
    printf("\n[");
    for(int i = 0; i< 50; i++)
    {
        if(vet[i]>=0){
            printf("%d ",vet[i]);
        }
    }
    printf("]\n");
}
