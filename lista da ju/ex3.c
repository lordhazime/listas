#include <stdio.h> 
int main(){
    char v[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','r','t','v','a','q','w','p'};
    int x, pertence=0;
    for(x=0; x<20; x++){
        if(v[x]=='a'){
            pertence=pertence+1;
        } 

    } 
    printf("a letra a aparece %d vezes", pertence); 


}