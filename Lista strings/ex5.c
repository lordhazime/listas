#include <stdio.h>
int main(){
    char v[60];
    int x, c;
    printf("Digite uma palavra\n");
    scanf("%s", v);
    for(x=0, c=0; x<60; x++){
        if(v[x]=='\0'){
            break;
        }
        else{
            c++;
        }
    }
    printf("Sua palavra possui %d letras\n", c);
}
    