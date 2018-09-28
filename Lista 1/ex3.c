#include <stdio.h>
int main(){
    int numv, nump = 0, numn = 0, numz, num;
    printf("Quantos valores deseja inserir?\n");
    scanf("%d", &numv);

    while (numv > 0) {
        printf ("Digite um valor \n");
        scanf("%d", &num);
        if (num > 0) {
            nump++;
        }
        else if (num < 0) {
            numn++;
        }
        else {
            numz ++;
        }
        numv--;
    }
    if (numz == 1) {
        printf ("Voce digitou %d numeros positivos, %d numeros negativos e %d vez o numero zero \n", nump, numn, numz);
    }
    else {
        printf ("Voce digitou %d numeros positivos, %d numeros negativos e %d vezes o numero zero \n", nump, numn, numz);
    }
}