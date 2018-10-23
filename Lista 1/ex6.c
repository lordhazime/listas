#include <stdio.h>
int main(){
    float n, r = 1;
    printf("Digite um valor\n");
    scanf("%f", &n);
    for( ; n>1 ; n--){
        r = r + (1/n);

    }
    printf("O valor da soma eh aproximadamente %.2f\n", r);
}