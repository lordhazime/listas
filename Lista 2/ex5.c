#include <stdio.h>
    
int main(){
    int x=10, p, y=0;
    int v[100];
    int r[100];
    char resp;
    printf("Deseja alterar o numero de elementos do vetor? (No momento possui 10 elementos) s/n\n");
    scanf(" %c", &resp);
    if(resp=='s'){
        printf("Quantos valores o vetor vai possuir?\n");
        scanf("%d", &p);
    }
    else{}
    for(p = p; p>=0; p--)
    for(x = 0; x<=p; x++){
        v[x]=r[y];
        y++;
    }
}