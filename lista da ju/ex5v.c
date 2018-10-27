#include<stdio.h> 
int main(){
    int v[30]; 
    int n[30];
    int x=0; 
    for(x=0;x<3;x++){
        printf("digite um numero\n");
        scanf("%d",&v[x]); 
        if(v[x]==0){
            v[x]=1;
        }
        n[x]=v[x];
    }
printf("O vetor n[] eh: {");
for(x=0;x<3;x++){
    printf(" %d ;", n[x]);
}
printf("}\n");
}