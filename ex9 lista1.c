#include <stdio.h>
#include <stdlib.h>

/* Faça  um  algoritmo  que  leia  um  número  N  e  que  indique  quantos  valores  inteiros  e positivos devem ser lidos a seguir.
Para cada valor lido, mostre uma tabela contendo o valor lido e o fatorial desse valor. */

void main()
{
    int N, vet[100], fat=1;
    printf("\nDigite quantos valores inteiros e positivos devem ser lidos: ");
    scanf("%d",&N);
    for (int i = 0; i <N; i++)
    {
        printf("\nDigite o valor do numero na posicao %d:",i);
        scanf("%d",&vet[i]);
    }
    for (int i = 0; i <N; i++)
    {
        fat=1;
        printf("\nValor lido na posicao %d: %d",i,vet[i]);
        for(int j = vet[i]; j >= 1 ; j--){
            fat = fat*j;
        }
        printf("\nFatorial do numero na posicao %d: %d",i,fat);
    }
}
