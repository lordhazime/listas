#include <stdio.h>
int main(){
    int numi, numf;
    printf("Digite o numero inicial\n");
    scanf("%d", &numi);
    printf("Digite o numero final\n");
    scanf("%d", &numf);
    while (numi <= numf){
        printf("%d \n", numi);
        numi++;
    }
}