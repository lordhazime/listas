#include <stdio.h>
int main(){
    char s[60], t[60];
    int x, y, c=0, n1, n2;
    printf("Digite uma palavra\n");
    scanf("%s", s);
    printf("Digite outra palavra\n");
    scanf("%s", t);
    for(x=0, n1=0;x<60;x++){
        if(s[x]=='\0'){
            break;
        }
        else{
            n1++;
        }
    }
    for(x=0, n2=0; x<60; x++){
        if(t[x]=='\0'){
            break;
        }
        else{
            n2++;
        }
    }
    for(x=0; x<n1; x++){
        for(y=0; y<n2; y++){
            if(s[x]==t[y]){
                c++;
            }
        }
    }
    printf("A sua segunda string possui %d recorrencias em relacao a primeira\n", c);
}