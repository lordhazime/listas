#include <stdio.h>
int main(){
    char v[60], c;
    int x, q;
    printf("Digite uma palavra\n");
    scanf("%s", v);
    printf("Digite um caractere\n");
    scanf(" %c", &c);
    for(x=0, q=0; x<60; x++){
        if(c==v[x]){
            q++;
        }
    }
    printf("O seu caractere '%c', aparece %d vezes na palavra\n", c, q);
}