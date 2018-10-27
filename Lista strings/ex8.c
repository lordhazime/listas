#include <stdio.h>
int main(){
    char v1[60];
    int x, y, n, s=0;
    printf("Digite uma palavra\n");
    scanf("%s", v1);
    for(x=0, n=0; x<60; x++){
        if(v1[x]=='\0'){
            break;
        }
        else{
            n++;
        }
    }
    for(x=0, y=n-1; x<n; x++, y--){
            if(v1[x]!= v1[y]){
                s=1;
            }
    }
    if(s){
        printf("Nao eh palindromo\n");
    }
    else{
        printf("Eh palindromo\n");
    }
}
