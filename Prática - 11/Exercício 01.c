/*Crie a função ordenar que receba três ponteiros que guardam o endereço de três variáveis do tipo inteiro.
Sua função deverá imprimir os valores das variáveis em ordem crescente separadas por um espaço.
*/
#include<stdio.h>
#include<stdlib.h>

void ordenar(int *a, int *b, int *c) {
    int tmp;
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if (*b > *c) {
        tmp = *b;
        *b = *c;
        *c = tmp;
    }
    if (*a > *b) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    printf("%d %d %d\n", *a, *b, *c);
}
int main(void){
    int a, b, c;
    a=13;
    b=13;
    c=13;
    ordenar(&a, &b, &c);
    return 0;
}