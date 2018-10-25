#include <stdio.h>
int main(){
    char v1[60], v2[60];
    int x, c, n=0;
    printf("Digite uma palavra\n");
    scanf("%s", v1);
    printf("Digite novamente a palavra anterior\n");
    scanf("%s", v2);
    for(x=0, c=0; x<60; x++){
        if(v1[x]=='\0'){
            break;
        }
        else{
            c++;
        }
    }
    for(x=0; x<c; x++){
        if(v1[x]!=v2[x]){
            n = 1;
        }
    }
    if(n){
        printf("As palavras nao correspondem\n");
    }
    else{
        printf("As palavras correspondem\n");
    }
}