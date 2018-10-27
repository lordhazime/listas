#include <stdio.h> 
int main(){
    int v[5];
    int x=0,p=0, n=0;
    for(x=0;x<5;x++){
        printf("digite um numero\n");
        scanf("%d", &v[x]);
        if(v[x]>=0){
            p=p+1; 
        }
    }
    printf("os numeros positivos sao %d\n", p);
}