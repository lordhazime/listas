#include <stdio.h>
int main(){
    int p, n, d = 0, f = 0;
    for (p = 1; p <= 10; p++){
        printf("Digite um valor\n");
        scanf("%d", &n);
        if (n > 10 && n < 20){
            printf("Dentro do intervalo\n");
            d = d + 1;
        }
        else{
            printf("Fora do intervalo\n");
            f= f + 1;
        }
    }
    printf ("%d numeros estao dentro do intervalo e %d numeros estao fora do intervalo [10,20]\n", d,f);
}