#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que preencha um vetor com oito números inteiros, calcule e mostre
dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos; o
segundo deve conter os números negativos. Cada vetor resultante vai ter, no máximo, oito
posições, que poderão não ser completamente utilizadas. */

void main()
{
    int vet1[8], vet2[8],vet3[8];
    for(int i = 0; i< 8; i++)
    {
        printf("\nValor na posicao %d no vetor 1: ",i);
        scanf("%d",&vet1[i]);
    }
    printf("\nVetor 2: \n[ ");
    for(int i = 0; i< 8; i++)
    {
        if(vet1[i]<0){
        vet2[i]= vet1[i];
        printf("%d ",vet2[i]);
        }
    }
    printf("]\n");

    printf("\nVetor 3: \n[ ");
    for(int i = 0; i< 8; i++)
    {
        if(vet1[i]>=0){
        vet3[i]= vet1[i];
        printf("%d ",vet3[i]);
        }
    }
    printf("]\n");
}
