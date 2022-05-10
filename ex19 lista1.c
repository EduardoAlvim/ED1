#include <stdio.h>
#include <stdlib.h>

/* Faça  um  algoritmo  que  preencha  um  vetor  com  dez  elementos  numérios  e  a  partir desse  vetor  faça  um  segundo  vetor  que  receba
 os  valores  do  primeiro  vetor  de  forma invertida. */

void main()
{
    int vet1[10],vet2[10], aux=0;
    for(int i = 0; i< 10; i++)
    {
        printf("\nValor na posicao %d no vetor 1: ",i);
        scanf("%d",&vet1[i]);
    }
    for(int i = 9; i >= 0; i--)
    {
        vet2[i]=vet1[aux];
        aux++;
    }
    printf("\nVetor 2: \n[ ");
    for(int i = 0; i< 10; i++)
    {
        printf("%d ",vet2[i]);
    }
    printf("]\n");
}
