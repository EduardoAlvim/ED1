#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que receba quatro valores: I, A, B e C. Desses valores, I � inteiro positivo, A, B e C s�o reais.
Escreva os n�meros A, B e C obedecendo � tabela a seguir: Suponha que o valor digitado para I seja sempre um valor v�lido,
ou seja, 1, 2 ou 3 e que os n�meros digitados sejam diferentes um do outro.

Valor de I   Forma de Escrever
    1        A, B e C em ordem crescente
    2        A, B e C em ordem decrescente
    3        O maior fica entre os outros dois n�meros */

void main()
{
    int I;
    float A, B, C;
    float maior, medio, menor;
    printf("\nDigite o valor de I: ");
    scanf("%d",&I);
    printf("\nDigite o valor de A: ");
    scanf("%f",&A);
    maior = A;
    medio = A;
    menor = A;
    printf("\nDigite o valor de B: ");
    scanf("%f",&B);
    if(B>maior){
        maior = B;
        medio = B;
    }
    else if(B<menor){
        menor = C;
    }
    else{
        medio = B;
    }
    printf("\nDigite o valor de C: ");
    scanf("%f",&C);
    if(C>maior){
        maior = C;
    }
    else if(C<menor){
        menor = C;
    }
    else{
        medio = C;
    }

    if(I == 1){
        printf("\n %f %f %f",menor,medio,maior);
    }
    else if(I == 2){
        printf("\n %f %f %f",maior,medio,menor);
    }
    else if(I == 3){
        printf("\n %f %f %f",menor,maior,medio);
    }
}
