#include <stdio.h>
int main(){
    int num, resultado;
    char r;
    r = 's';

    printf("Digite o numero para o fatorial ser calculado\n");
    scanf("%d", &num);
    resultado = 1;
    while (num > 0){
        resultado = resultado * num;
        num--;
        
    }

    printf ("%d \n", resultado);
    
    
}
    