#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que preencha um vetor com oito n�meros inteiros, calcule e mostre
dois vetores resultantes. O primeiro vetor resultante deve conter os n�meros positivos; o
segundo deve conter os n�meros negativos. Cada vetor resultante vai ter, no m�ximo, oito
posi��es, que poder�o n�o ser completamente utilizadas. */

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
