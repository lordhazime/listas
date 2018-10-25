#include <stdio.h>
int main(){
    char v[60], c;
    int x;
    printf("Digite uma palavra\n");
    scanf("%s", v);
    printf("Digite um caractere\n");
    scanf(" %c", &c);
    
    for(x=0; x<60; x++){
        if(c==v[x]){
            break;
        }
    }
    printf("O caractere aparece primeiro na %d.a posicao da string\n", x+1);
}