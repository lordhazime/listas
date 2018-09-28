#include <stdio.h>
int main(){
    int x[]={1,2,3,4,5};
    int y[5], nx, ny=0;
    for(nx=4; nx>=0; nx--){
        y[ny]=x[nx];
        ny++;
    }
    printf("y = {%d,%d,%d,%d,%d} \n", y[0],y[1],y[2],y[3],y[4]);
}