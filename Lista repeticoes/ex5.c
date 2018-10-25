#include <stdio.h>
int main(){
    char r = 's';
    int num, fat;
    while(r == 's'){
        printf("digite o numero a ser calculado o fatorial\n");
        scanf("%d", &num);
        fat = 1;
        for( ; num>0; num--){
            fat = fat * num;
        }
        printf("O fatorial eh %d\nDeseja prosseguir? (s/n)\n", fat);
        scanf(" %c", &r);
    }
}