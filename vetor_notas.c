#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    float vet[x];
    float soma=0;

    for(int i=0; i<x; i++){
        scanf("%f",&vet[i]);
        soma += vet[i];
    }

    float maior = vet[0];
    for(int i=0; i<x; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    float menor = vet[0];
    for(int i=0; i<x; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    float media;
    media = soma / x;

    printf("%.1f %.1f %.1f",maior,menor,media);
}
