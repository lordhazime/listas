#include <stdio.h>
int main(){
    int nump=0, numn=0, numz=0, numv, num;
    printf("Digite a quantidade de numeros\n");
    scanf("%d", &numv);
    while(numv>0){
        printf("Digite um valor\n");
        scanf("%d", &num);
        if(num>0){
            nump++;
        }
        else if(num<0){
            numn++;
        }
        else if(num==0){
            numz++;
        }
        numv--;
    }
    printf("Voce digitou %d numero(s) positivo(s), %d numero(s) negativo(s) e %d vez(es) o numero zero\n", nump, numn, numz);
}