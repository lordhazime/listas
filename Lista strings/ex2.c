#include <stdio.h>
int main(){
    int i;
    char s[60];
    printf("Digite uma palavra\n");
    scanf("%s", s);
    printf("Vc deseja receber qual caractere?\n");
    scanf("%d", &i);
    printf("%c\n", s[i-1]);
}