#include <stdio.h>
int main(){
    long int n1, nf;
    char r = 's';
    while(r == 's'){  
    printf("Digite um numero para calcular o fatorial\n");
    scanf("%ld", &n1);
    nf = 1;
    if(n1 == 0){
        printf("O fatorial de 0 eh 0\n");
    }
    else{
    while(n1>0){
        nf=nf * n1;
        n1 = n1-1;
        printf("O fatorial eh %ld\n", nf);}p
    }
    
    printf("Deseja continuar? (s/n)\n");
    scanf(" %c", &r);
    }
}