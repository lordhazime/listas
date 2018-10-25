#include <stdio.h>
int main(){
    int v[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, max, x;
    for(max = 0, x= 0; x<10; x++){
        if (v[x]>max){
            max = v[x];
        }
    }
    printf("O maior numero eh %d\n", max);
}