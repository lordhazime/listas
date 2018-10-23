#include <stdio.h>
int main(){
    int d, numi, numf, num;
    printf("Digite um divisor\n");
    scanf("%d", &d);
    printf("Digite um numero inicial\n");
    scanf("%d", &numi);
    printf("Digite um numero final\n");
    scanf("%d", &numf);
    while(numi<=numf){
        if(numi%d == 0){
            printf("%d ; ", numi);
        }
        numi++;
    }
    printf("\n");
}