#include <stdio.h>
int main(){
    int v[]={50, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, y, max = 0;
    for(x=0; x<10; x++){
        for(y=9; y>=0; y--){
            if(v[y]-v[x]>max){
                max = v[y]-v[x];
            }
        }
    }
    printf("A maior diferenca eh %d\n", max);
}