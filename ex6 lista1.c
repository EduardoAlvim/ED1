#include <stdio.h>
#include <stdlib.h>

/*A  nota  final  de  um  estudante  �  calculada  a  partir  de  tr�s  notas  atribu�das, respectivamente,
a  um trabalho de laborat�rio, a  uma  avalia��o  semestral e  a um  exame final.
A m�dia das tr�s notas mencionadas obedece aos pesos a seguir:

Trabalho de laborat�rio: 2
Avalia��o semestral: 3
Exame final: 5

Fa�a  um  algoritmo  que  receba  as  tr�s  notas,  calcule  e  mostre  a  m�dia  ponderada
e  o conceito eu segue a tabela:

8,01 -> 10,0 A
7,01 -> 8,0 B
6,01 -> 7,0 C
5,01 -> 6,0 D
0,00 -> 5,0 E */


void main()
{
    float tdl, as, ef;
    float media;
    printf("\nDigite as notas do aluno 1");
    printf("\nTrabalho de laboratorio: ");
    scanf("%f",&tdl);
    printf("\nAvaliacao semestral: ");
    scanf("%f",&as);
    printf("\nExame final: ");
    scanf("%f",&ef);

    tdl = tdl*0.2;
    as = as*0.3;
    ef= ef*0.5;

    media= tdl+ as+ ef;

    printf("\nMedia e conceito do aluno 1: ");
    printf("\nMedia: %.2f",media);
    if(media >= 8.01){
        printf("\nConceito A");
    }
    else if(7.01 <= media <=8){
        printf("\nConceito B");
    }
    else if(6.01 <= media <=7){
        printf("\nConceito C");
    }
    else if(5.01 <= media <=6){
        printf("\nConceito D");
    }
    else if(0 <= media <=5){
        printf("\nConceito E");
    }

    printf("\nDigite as notas do aluno 2");
    printf("\nTrabalho de laboratorio: ");
    scanf("%f",&tdl);
    printf("\nAvaliacao semestral: ");
    scanf("%f",&as);
    printf("\nExame final: ");
    scanf("%f",&ef);

    tdl = tdl*0.2;
    as = as*0.3;
    ef= ef*0.5;

    media= tdl+ as+ ef;

    printf("\nMedia e conceito do aluno 2: ");
    printf("\nMedia: %.2f",media);
    if(media >= 8.01){
        printf("\nConceito A");
    }
    else if(7.01 <= media <=8){
        printf("\nConceito B");
    }
    else if(6.01 <= media <=7){
        printf("\nConceito C");
    }
    else if(5.01 <= media <=6){
        printf("\nConceito D");
    }
    else if(0 <= media <=5){
        printf("\nConceito E");
    }

    printf("\nDigite as notas do aluno 3");
    printf("\nTrabalho de laboratorio: ");
    scanf("%f",&tdl);
    printf("\nAvaliacao semestral: ");
    scanf("%f",&as);
    printf("\nExame final: ");
    scanf("%f",&ef);

    tdl = tdl*0.2;
    as = as*0.3;
    ef= ef*0.5;

    media= tdl+ as+ ef;

    printf("\nMedia e conceito do aluno 3: ");
    printf("\nMedia: %.2f",media);
    if(media >= 8.01){
        printf("\nConceito A");
    }
    else if(7.01 <= media <=8){
        printf("\nConceito B");
    }
    else if(6.01 <= media <=7){
        printf("\nConceito C");
    }
    else if(5.01 <= media <=6){
        printf("\nConceito D");
    }
    else if(0 <= media <=5){
        printf("\nConceito E");
    }



}
