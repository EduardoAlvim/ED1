#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que preencha um vetor com seis elementos inteiros, calcule e
mostre:
� Todos os n�meros pares;
� A quantidade de n�meros pares;
� Todos os n�meros impares;
� A quantidade de n�meros impares; */

void main()
{
    int vet[6], contp=0, contimp=0;
    for(int i = 0; i< 6; i++)
    {
        printf("\nValor na posicao: %d",i);
        scanf("%d",&vet[i]);
    }
    printf("\nNumeros pares: \n[");
    for(int i = 0; i< 6; i++)
    {
        if(vet[i] %2 == 0){
            printf("%d ",vet[i]);
            contp++;
        }
    }
    printf("] \nQuantidade pares: %d",contp);

    printf("\nNumeros impares: \n[");
    for(int i = 0; i< 6; i++)
    {
        if(vet[i] %2 != 0){
            printf("%d ",vet[i]);
            contimp++;
        }
    }
    printf("] \nQuantidade impares: %d",contimp);
}
