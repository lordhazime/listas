#include <stdio.h>
int main(){
    char v2[]={'a','e','i','o','u'}, v1[60];
    int x, y, c, count = 0;
    printf("Digite uma palavra\n");
    scanf("%[^\n]s", v1);

    for(x=0, c=0; x<60; x++){
        if(v1[x]=='\0'){
            break;
        }
        else{
            c++;
        }
    }
    for(x=0; x<=c; x++){
        if(v1[x]==v2[x]){
            count++;
        }
    }
    printf("Sua palavra contem %d vogais\n", count);
}
