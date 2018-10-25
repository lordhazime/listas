#include <stdio.h>
int main(){
    int num, numv, nump = 0, numn = 0, numz = 0, numi, perp, pern, perz;
    printf("Digite a quantidade de numeros\n");
    scanf("%d", &numv);
    numi = numv;
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
    perp = nump/numi;
    pern = numn/numi;
    perz = numz/numi;
    printf("Voce digitou %d numero(s) positivo(s) (%d por cento)\n%d numero(s) negativo(s) (%d por cento)\n%d vez(es) o numero zero (%d por cento)\n", nump, perp, numn, pern, numz, perz);
}