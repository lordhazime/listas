#include <stdio.h>
int main(){
    int vDigitado[10], vPositivo[10], vNegativo[10], tamPos = 0, tamNeg = 0, x;
    for (x=0; x<10; x++){
        printf("Digite o %d.o numero:\n", x+1);
        scanf("%d", &vDigitado[x]);
        if (vDigitado[x]>=0){
            vPositivo[tamPos]=vDigitado[x];
            tamPos++;
        }
        else{
            vNegativo[tamNeg]=vDigitado[x];
            tamNeg++;
        }
    }
    printf("Vetor Digitado : ");
    for (x=0; x<10; x++){
        printf("%d ; ", vDigitado[x]);
    }
    printf("\nVetor Positivo : ");
    for (x=0; x<tamPos; x++){
        printf("%d ; ", vPositivo[x]);
    }
    printf("\nVetor Negativo : ");
    for (x=0; x<tamNeg; x++){
        printf("%d ; ", vNegativo[x]);
    }
    printf("\n");
}