#include<stdio.h>
int main(){
int M,A,B,irmao;

scanf("%d",&M);
scanf("%d",&A);
scanf("%d",&B);

if((40 <= M && M <= 110) && (1 <= A && A < M) && (1 <= B && B < M) && (A != B)){
    irmao = M - (A + B);
    if(irmao > A && irmao >B){
    printf("%d",irmao);
    }
    if(irmao < A && A >B){
    printf("%d",A);
    }
    if(B > A && irmao <B){
    printf("%d",B);
    }
}
}

