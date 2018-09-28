#include <stdio.h>
int main(){
    int v[]={1,3,5,7,9,11,13,15,17,19}; //Estabelecido um vetor com dez elementos, sendo os dez declarados anteriormente
    int x, n, pertence = 0;
    printf("Digite um numero inteiro\n");
    scanf("%d", &x);
    for (n = 0; n <10 ; n++){
        if (v[n] == x){
            pertence = 1;
        }}
        if(pertence){
            printf("Pertence\n");
        }
        else{
            printf("Nao pertence\n");
        }
    }
