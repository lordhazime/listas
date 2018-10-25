#include <stdio.h>
int main(){
    int A[5][10], i, j, x=0;
    for (i = 0; i<5; i++){
        for (j = 0; j<10; j++){
            A[i][j] = x;
            x++;
        }
    }
    for (j=0; j<10; j++){
        for (i = 0; i<5; i++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
        

    }
