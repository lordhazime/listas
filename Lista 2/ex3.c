#include <stdio.h>
int main(){
    char v[]={'a','b','e','d','w','q','t','y','a','g','f','a','b','d','w','u','i','b','c','d'};
    int numa, i;
    for(i = 0; i <= 20; i++){
        if (v[i] == 'a'){
            numa++;
        }
    }
    printf("%d\n", numa);
}