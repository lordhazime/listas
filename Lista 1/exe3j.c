#include <stdio.h>
void main(){
    int p=0,n=0,z=0, quer, num;
printf("quer digitar um numero?1==sim,0==nao");
scanf("%d", &quer);
while(quer==1){
    printf("digite um numero");
    scanf("%d",&num);
if(num>0){
p=p+1;
printf("%d numeros positivos", p);
}
if(num<0){
    n=n+1;
    printf("%d numeros negativos",n);
}
if(num==0){
    z=z+1;
    printf("%d numeros zeros",z);
}
printf("desejar continuar?", digitar 1==sim,0==nao);
scanf(%d",quer);
}

