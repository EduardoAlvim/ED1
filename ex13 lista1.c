#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que leia um vetor com cinq�enta posi��es para n�meros inteiros e
mostre somente os n�meros positivos. */

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
