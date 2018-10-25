#include <stdio.h>
int main(){
    int d= 0, f= 0, n = 1, num;
    while(n <= 10){
        printf("Digite um numero\n");
        scanf("%d", &num);
        if(num >= 10 && num <= 20){
            d++;
        }
        else{
            f++;
        }
        n++;
    }
    printf("%d numeros estao dentro do intervalo e %d estao fora\n", d, f);
}