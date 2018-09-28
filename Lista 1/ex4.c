#include <stdio.h>
int main(){
    int n ,nvi , nv, np = 0, nn = 0, nz = 0, pp, pn, pz;
    float ma = 0;
    printf ("Digite o numero de valores a ser inseridos \n");
    scanf ("%d", &nv);
    nvi = nv;
    while (nv > 0) {
        printf ("Digite um valor \n");
        scanf ("%d", &n);
        ma = ma + n;
        if (n > 0){
            np++;
        }
        else if (n < 0){
            nn++;
        }
        else {
            nz++;
        }
        
        nv--;
    }
    
    ma = ma/nvi;
    pp = (100*np)/nvi;
    pn = (100*nn)/nvi;
    pz = (100*nz)/nvi;
    printf("Voce digitou %d numeros, sendo:\n %d positivos (%d por cento)\n %d negativos (%d por cento)\n %d zeros (%d por cento)\n A media aritmetica desses numeros e dada por %.2f.\n", nvi, np, pp, nn, pn, nz, pz, ma );

}