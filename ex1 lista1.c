#include <stdio.h>
#include <stdlib.h>

//Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. Defina que todos os meses t�m 30 dias.

void main()
{
    int anos, meses, dias, resp;
    printf("\nDigite sua idade expressa em anos, meses e dias:");
    scanf("%d %d %d",&anos,&meses,&dias);
    resp=dias;
    resp=resp+(meses*30);
    resp=resp+(anos*360);
    printf("\nSua idade expressa em dias e: %d",resp);
}
