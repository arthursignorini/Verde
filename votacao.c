#include<stdio.h>
int main(){
float x,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0,total=0,percent;

scanf("%f",&x);
while(x!=0){
    if(x>6){
    scanf("%f",&x);
    } else{
    total++;
    if(x==1){
        cont1++;
    }
    if(x==2){
        cont2++;
    }
    if(x==3){
        cont3++;
    }
    if(x==4){
        cont4++;
    }
    if(x==5){
        cont5++;
    }
    if(x==6){
        cont6++;
    }
    scanf("%f",&x);
}
}
printf("%.0f %.0f %.0f %.0f\n",cont1,cont2,cont3,cont4);
printf("%.0f\n",cont5);
percent = (cont6 * 100) / total;
printf("%.2f",percent);

}


