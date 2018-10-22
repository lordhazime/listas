#include <stdio.h>
int main(){
    float n, r;
    printf("Digite um numero\n");
    scanf("%f", &n);
    for(r = 0; n>0; n--){
        r = r + 1/n;
    }
    printf("O resultado eh aproximadamente  %.2f \n", r); 
}