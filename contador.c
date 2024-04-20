#include<stdio.h>
int main(){
int cont=0,cont5=0,numero;

scanf("%d",&numero);

while(numero!=-1){
    scanf("%d",&numero);
    cont++;
    if(numero ==5){
        cont5++;
    }
}
printf("%d %d",cont,cont5);
}
