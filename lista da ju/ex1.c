#include <stdio.h> 
int main(){
    int x=0,n, v[10]={1,2,3,4,5,6,7,8,9,10}, pertence = 0; 
    printf("digite um numero\n");
    scanf("%d", &n); 
    while(x<10){
        if(n==v[x]){
            pertence = 1;
        } 
        
        x++;
    }
    if(pertence = 1){
        printf("Pertence\n");
    }
    else{
        printf("Nao pertence\n");
    }

}