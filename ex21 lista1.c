#include <stdio.h>
#include <stdlib.h>

/*  Fa�a um algoritmo para apagar valores de um vetor de no m�ximo cem valores
num�ricos. O usu�rio digita um valor e o algoritmo deve apagar e reorganizar o vetor. */

void main()
{
    int vet[100], remover, ultimo, aux=0;

    for(int i = 0; i< 100; i++)
    {
        printf("\nValor na posicao %d no vetor: ",i);
        scanf("%d",&vet[i]);
    }
    ultimo = vet[sizeof(vet) - 1];

    printf("\nDigite o valor que deseja remover do vetor: ");
    scanf("%d",&remover);

    while (vet[aux] != ultimo)
    {
        if (vet[aux] == remover)
        {
            vet[aux] = vet[aux + 1];
            if (vet[aux] != ultimo){
               vet[aux + 1] = remover;
            }
        }

        aux++;
    }

    for (int i = 0; vet[i] != ultimo; i++){
        printf("%d\n", vet[i]);
    }
}
