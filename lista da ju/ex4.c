#include <stdio.h>
int main(){
    int v[5]={1,2,3,4,5};
    int x[5], t, j; 
    for(t=0, j=4; t<5; t++){
        x[t]=v[j];
        j--; 
        printf("%d\n", x[t]);
    } 
}