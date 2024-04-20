#include<stdio.h>
int main(){
int numero,digito,invertido=0;

scanf("%d",&numero);

while(numero != 0){
    digito = numero % 10;
    invertido = invertido * 10 + digito;
    numero = numero / 10;
}
printf("%d",invertido);
}
