#include<stdio.h>
int main(){
int num,produto=1;

scanf("%d",&num);

for(int i=1; i<=num; i++){
    produto = produto * i;
}
printf("%d",produto);
}
