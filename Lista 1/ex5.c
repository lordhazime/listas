#include <stdio.h>
int main(){
    char s, n;
    int num, fat, numi;
    s = 's';
    while (s == 's'){
        printf("Digite um numero\n");
        scanf("%d", &num);
        numi = num;
        for (fat = 1; num > 0; num--){
            fat = num * fat;
        }
        printf("O numero fatorial de %d eh %d\n", numi, fat);
        printf("Deseja continuar? (s/n)\n");
        scanf(" %c", &s);
    }
}