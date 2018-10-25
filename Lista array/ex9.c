#include <stdio.h>
int main(){
    int v[100], r, c;
    for(c=0, r=0; c<100; c++){
        printf("Digite o %d.o valor\n", c+1);
        scanf("%d", &v[c]);
        r = r + v[c];
    }
    printf("A soma eh %d\n", r);
}