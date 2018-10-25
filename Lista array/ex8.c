#include <stdio.h>
int main(){
    int v1[5], v2[5], v3[5], m[3][5], x, i, j;
    //Declarar o primeiro vetor
    for(x=0; x<5; x++){
        printf("Digite o %d.o numero do primeiro vetor\n", x+1);
        scanf("%d", &v1[x]);
    }
    //Declarar o segundo vetor
    for(x=0; x<5; x++){
        printf("Digite o %d.o numero do segundo vetor\n", x+1);
        scanf("%d", &v2[x]);
    }
    //Declarar o terceiro vetor
    for(x=0; x<5; x++){
        printf("Digite o %d.o numero do terceiro vetor\n", x+1);
        scanf("%d", &v3[x]);
    }
    //Estabelecer o primeiro vetor para a primeira linha
    for(j=0, x=0; j<5; j++){
        m[0][j]=v1[x];
        x++;
    }
    //Estabelecer o segundo vetor para a segunda linha
    for(j=0, x=0; j<5; j++){
        m[1][j]=v2[x];
        x++;
    }
    //Estabelecer o terceiro vetor para a terceira linha
    for(j=0, x=0; j<5; j++){
        m[2][j]=v3[x];
        x++;
    }
    //Printar a matriz toda
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("%d ; ", m[i][j]);
        }
        printf("\n");
    }
    
}