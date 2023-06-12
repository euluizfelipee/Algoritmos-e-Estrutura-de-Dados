/*Leia 4 valores inteiros A, B, C e D. A seguir, se
    • B for maior do que C, e
    • D for maior do que A, e
    • a soma de C com D for maior que a soma de A e B, e
    • C e D, ambos, forem positivos, e
    • a variável A for par;

então escrever a mensagem ”Valores aceitos”, senão escrever ”Valores nao aceitos”.*/


#include<stdio.h>

int main(void){ 
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    if(B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0){
        printf("Valores Aceitos");

    }
    else{
        printf("Valores não aceitos");
    }
    return 0;
}