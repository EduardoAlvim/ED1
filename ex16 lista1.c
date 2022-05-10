#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que preencha dois vetores de dez posições cada um, determine e
mostre o terceiro contendo a soma das posições dos dois vetores anteriores. */

void main()
{
    int vet1[10], vet2[10],vet3[10];
    for(int i = 0; i< 10; i++)
    {
        printf("\nValor na posicao %d no vetor 1: ",i);
        scanf("%d",&vet1[i]);
    }
    for(int i = 0; i< 10; i++)
    {
        printf("\nValor na posicao %d no vetor 2: ",i);
        scanf("%d",&vet2[i]);
    }
    printf("\nVetor 3: \n[ ");
    for(int i = 0; i< 10; i++)
    {
        vet3[i]= vet1[i] + vet2[i];
        printf("%d ",vet3[i]);
    }
    printf("]\n");
}
