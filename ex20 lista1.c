#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que preencha um vetor com dez elementos numéricos, não pode ser inserido valor repetido,
o algoritmo deverá informar o usuário se pode ou não inserir o novo valor. */

void main()
{
    int vet[10], i=0,j=0, valor;
    while(i < 10)
    {
        j=0;
        printf("\nValor na posicao %d no vetor: ",i);
        scanf("%d",&valor);
        while(vet[j] != valor && j<=i)
        {
            j++;
        }
        if(j <= i)
        {
            printf("\nValor ja existe");
        }
        else
        {
            vet[i]=valor;
            i++;
            printf("\nValor inserido");
        }
    }
}
