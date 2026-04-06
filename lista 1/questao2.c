#include <stdio.h>

int main(){
    float a, b, c, temp;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b){
        temp = a;
        a = b;
        b = temp;
    }

    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }

    if (a < b){
        temp = a;
        a = b;
        b = temp;
    }

    if (a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } if ((a*a) == (b*b) + (c*c)){
        printf("TRIANGULO RETANGULO\n");
    } if ((a*a) > ((b*b) + (c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    } if ((a*a) < ((b*b) + (c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    } if (a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    } if ((a == b || b == c) && (a != b || b != c || a != c)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}