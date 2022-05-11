#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que carregue uma matriz 10x20 com números inteiros e some cada
uma das linhas, armazenando o resultado das somas em um vetor. A seguir, multiplique cada
elemento da matriz pela soma da linha e mostre a matriz resultante. */

void main()
{
    int mat[10][20], vet[10], i, j;
    for ( i=0; i<10; i++ )
    {
        for ( j=0; j<20; j++ )
        {
            printf("\nDigite o valor da linha %d e coluna %d da matriz: ",i,j);
            scanf ("%d", &mat[ i ][ j ]);
            vet[i]= vet[i] + mat[i][j];
        }
    }

    for ( i=0; i<10; i++ )
    {
        for ( j=0; j<20; j++ )
        {
            mat[i][j]= mat[i][j]*vet[i];
        }
    }

    for ( i=0; i<10; i++ )
    {
        for ( j=0; j<20; j++ )
        {
            printf ("\nElemento[%d][%d] = %d\n",i,j, mat[ i ][ j ]);
        }
    }
}
