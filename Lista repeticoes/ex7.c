#include <stdio.h>
int main(){
    int ni = 100;
    while(ni >= 100 && ni <=200){
        if(ni%2 != 0){
            printf("%d ; ", ni);
        }
        ni++;
    }
    printf("\n");
}