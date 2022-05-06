#include <stdio.h>
#include <stdlib.h>

/* Foi  feita  uma  estatística  em  cinco  cidades  brasileiras  para  coletar  dados  sobre acidentes de trânsito. Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vitimas.
Deseja se saber:
a)qual o maior e o menor índice de acidentes de trânsito e a qual cidade pertence;
b)qual a média de veículos nas cinco cidades juntas;
c)qual a média de acidentes de transito nas cidades com menos de 2000 veículos de passeio.
*/

struct cidade{
    int codcidade,nveiculos,nacidentes;
};

void main()
{
    int vet[5], maior, menor,mediav, mediaa,codmaior, codmenor;
    cidade vet[5];
    for(int i = 0; i <5;i++){
        printf("\nDigite o codigo da cidade: ");
        scanf("%d",&vet[i].codcidade);
        printf("\nDigite o numero de veiculos de passeio: ");
        scanf("%d",&vet[i].nveiculos);
        printf("\nDigite o numero de acidentes: ");
        scanf("%d",&vet[i].nacidentes);
        if(i=0){
                maior = vet[i].nacidentes;
                codmaior = vet[i].codcidade;
                menor = vet[i].nacidentes;
                codmenor = vet[i].codcidade;
        }
        else{
            if(vet[i].nacidentes > maior){
                maior = vet[i].nacidentes;
            }
            else if(vet[i].nacidentes < menor){
                menor = vet[i].nacidentes;
            }
        }
    }
    for (int i = 0; i <5;i++){
        mediav = mediav + vet[i].nveiculos;
        mediaa = mediaa + vet[i].nacidentes;
    }
    mediav = mediav/5;
    meidaa = mediaa/5;
    printf("\nCidade com maior indice de acidentes: %d com %d acidentes \nCidade com menor indice de acidentes: %d com %d acidentes \nMedia de veiculos: %d \nMedia de acidentes: %d",codmaior,maior,codmenor,menor,mediav,mediaa);
}
