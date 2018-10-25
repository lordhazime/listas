#include <stdio.h>
    
int main(){
    int x, p, y=0, z;
    int v[1000000];
    int r[1000000];
    char resp;
    printf("Deseja alterar o numero de elementos do vetor? (No momento possui 10 elementos) s/n\n");
    scanf(" %c", &resp);
    if(resp=='s'){
        printf("Quantos valores o vetor vai possuir?\n");
        scanf("%d", &p);
        
    }
    else{
        p = 10;
    }
        
    for(z = 0 ; z<p; z++){
        printf("Digite um valor para v[%d]\n", z);
        scanf("%d", &v[z]);
        x++;
    }
    
    for(x = p-1; x>=0; x--){
        r[y]=v[x];
        y++;
    }
    printf("vetor ao contrario : {");
    for(z = 0 ; z<p; z++){
    printf(" %d ;", r[z]);
    }
    printf("}\n");
}