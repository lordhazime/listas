#include <stdio.h> 
int main(){
    int v[20]; 
    int p=0, n; 
    for(n=0;n<20;n++){
        printf("digite um numero\n");
        scanf("%d", &n);
    }
    for(p>0; p<20; p++){
        p=p+1; 
    } 
    printf("o seu vetor possui %d numeros positivos\n", p,n);

}