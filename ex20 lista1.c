#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que preencha um vetor com dez elementos num�ricos, n�o pode ser inserido valor repetido,
o algoritmo dever� informar o usu�rio se pode ou n�o inserir o novo valor. */

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
