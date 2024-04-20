#include<stdio.h>
int main(){
int num=0,cont=0;

scanf("%d",&num);
while(num>0){
    cont=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cont++;
        }
    }
    if(cont == 2){
        printf("Primo\n");
    }else{
        printf("Nao primo\n");
    }
    scanf("%d",&num);
}
}
