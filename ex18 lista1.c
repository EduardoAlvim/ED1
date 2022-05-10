#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que preencha dois vetores de dez elementos numéricos cada um e mostre o vetor resultante da intercalação deles. */

void main()
{
    int vet1[10],vet2[10],vet3[20],c1=0,c2=0;

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
    for(int i = 0; i< 20; i++)
    {
        if(i %2 == 0 || i==0){
            vet3[i]= vet1[c1];
            c1++;
        }
        else{
            vet3[i]= vet2[c2];
            c2++;
        }
    }
    printf("\nVetor 3: \n[ ");
    for(int i = 0; i< 20; i++)
    {
        printf("%d ",vet3[i]);
    }
    printf("]\n");
}
