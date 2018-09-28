#include <stdio.h>
int main(){
    int n;
    for (n = 100; n <= 200; n++){
        if (n%2 != 0){
            printf("%d \n", n);
        }
    }
}