#include<stdio.h>
#include<string.h>

void maior_tamanho (int x, char vet[x][50])
{
    char len = strlen(vet[0]);
    int maior;
    for(int i=0; i<x; i++){
       if((strlen(vet[i])) > len){
        len = strlen(vet[i]);
        maior = i;
       }
    }
    printf("%s\n", vet[maior]);
}

void alfabetica (int x, char vet[x][50])
{
    int menor = 0;
    for(int i=0; i<x; i++){
        if(strcmp(vet[i], vet[menor]) > 0) { // se retornar negativo significa que a primeira eh menor que a segunda e positivo o contrario
            menor = i;
        }
    }
    printf("%s",vet[menor]);
}

int main()
{
    int x;
    scanf("%d",&x);
    getchar();
    char vet[x][50];

    for(int i=0; i<x; i++){
        fgets(vet[i], 50, stdin);
        vet[i][strcspn(vet[i], "\n")] = '\0';
    }

    maior_tamanho(x, vet);
    alfabetica(x, vet);

}
