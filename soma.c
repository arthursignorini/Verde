#include<stdio.h>
int main(){
float soma=0,x,numerador=1,denominador=1;

scanf("%f",&x);

for(int i=0; i<x; i++){
    soma = soma + (numerador/denominador);
    numerador = numerador + 2;
    denominador = denominador + 1;
}
printf("%.2f",soma);
}
