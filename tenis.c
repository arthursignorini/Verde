#include<stdio.h>
int main(){
char escolha,cont=0;

for(int i=0; i<6; i++){
    scanf(" %c",&escolha);
    if(escolha == 'V'){
        cont++;
    }
}
if(cont==5 || cont==6){
    printf("1");
}else{
    if(cont==3 || cont==4){
        printf("2");
    }else{
        if(cont==1 || cont==2){
            printf("3");
        }else{
            printf("-1");
        }
    }
}
}
