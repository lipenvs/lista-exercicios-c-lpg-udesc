#include <stdio.h>

int main(){
    int a, b;
    printf("Digite o primeiro e o segundo valor: \n", a);
    scanf("%d %d", &a, &b);

    if (a < b){
        printf("O JOGO DUROU %d HORA(S)", (b - a));
    } else if (a == b){
        printf("O JOGO DUROU 24 HORA(S)");
    } else if (a > b) {
        int ate_meia_noite = 24 - a;
        printf("O JOGO DUROU %d HORA(S)", (ate_meia_noite + b));
    }

    return 0;
}