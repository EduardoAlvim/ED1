#include <stdio.h>
#include <stdlib.h>

/*Faça  um  programa  que  carregue  uma  matriz  15x5 com  números  inteiros,  calcule  e mostre  quais  os  elementos  da  matriz  que  se  repetem
e  quantas  vezes  cada  um  está repetido. */

void main()
{
    int mat[15][5],aux,cont,i,j,k,l;
    for(i = 0; i<15; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("\nDigite o valor da linha %d e coluna %d da matriz: ",i,j);
            scanf ("%d", &mat[i][j]);
        }
    }

    for(i = 0; i<15; i++)
    {
        for(j=0; j<5; j++)
        {
            aux= mat[i][j];
            cont=1;
            if(aux>0)
            {
                mat[i][j]=-30;
                for(k = 0; k<15; k++)
                {
                    for(l=0; l<5; l++)
                    {
                        if(aux==mat[k][l])
                        {
                            cont++;
                            mat[k][l]=-30;
                        }
                    }
                }
                 if(cont != 0)
                        {
                            printf("\n O valor %d, apareceu %d vezes",aux, cont);
                        }
                }

        }
    }

}
