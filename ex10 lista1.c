#include <stdio.h>
#include <stdlib.h>

/* Foi  feita  uma  estat�stica  em  cinco  cidades  brasileiras  para  coletar  dados  sobre acidentes de tr�nsito. Foram obtidos os seguintes dados:
a) c�digo da cidade;
b) n�mero de ve�culos de passeio;
c) n�mero de acidentes de tr�nsito com vitimas.
Deseja se saber:
a)qual o maior e o menor �ndice de acidentes de tr�nsito e a qual cidade pertence;
b)qual a m�dia de ve�culos nas cinco cidades juntas;
c)qual a m�dia de acidentes de transito nas cidades com menos de 2000 ve�culos de passeio.
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
