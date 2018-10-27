#include <stdio.h> 
int main(){
    int v[20]; 
    int ordem; 
    int i=0; 
    for(i=0; i<20; i++){
    printf("digite um numero");
    scanf("%d", &v[i]);
    } 
    printf("digite 1 para ordem direita e 2 para ordem inversa"); 
    scanf("%d", &ordem);
    if(ordem==1){
        for(i=0; i<20; i++){
            printf("%d", v[i]);
        }
    }
    else if(ordem==2){
            for(i=19;i>=0;i--){
                printf("%d",v[i]);
            }
        }
}