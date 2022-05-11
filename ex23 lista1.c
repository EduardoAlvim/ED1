#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que carregue uma matriz 6x4 com números inteiros, calcule e
mostre quantos elementos dessa matriz são maiores que 30 e, em seguida, monte uma
segunda matriz com os elementos diferentes de 30. No lugar do número 30 da segunda
matriz coloque o número zero. */

void main()
{
    int mat1[6][4], mat2[6][4], i, j, cont=0;

    for ( i=0; i<6; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            printf("\nDigite o valor da linha %d e coluna %d da matriz: ",i,j);
            scanf ("%d", &mat1[ i ][ j ]);
            if(mat1[ i ][ j ] > 30){
                cont++;
            }
        }
    }

    printf("\nTemos %d numeros maiores que 30 nessa matriz: ",cont);

    for ( i=0; i<6; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            if(mat1[i][j] == 30){
                mat2[i][j] = 0;
            }
            else{
                mat2[i][j] = mat1[i][j];
            }
             printf ("\nElemento[%d][%d] da matriz 2= %d\n",i,j, mat2[ i ][ j ]);
        }
    }

}
