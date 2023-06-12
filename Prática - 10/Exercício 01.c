/*Implemente as seguintes funções abaixo:
int multiplica (int x1, int x2) que retorna a multiplicação de x1 por x2;
int quadrado (int x) que retorna o quadrado de x
int cubo (int x) que retorna x ao cubo
int pol_cubo(int a, int b, int c, int d, int x) que retorna ax³ + bx² + cx + d
*/
#include <stdio.h>

int multiplica(int x1, int x2){
    return x1*x2;
}
int cubo(int n){
    return n*n*n;
}
int quadrado(int x){
    return x*x;
}
int pol_cubo(int a, int b, int c, int d, int x){
    int pol_cubo = a *cubo(x) + b*quadrado(x) + multiplica(c,x) + d;
    return pol_cubo;
}

int main(void){
    int i, n;
    int  a, b, c, d, x;   
    scanf("%i", &n);
        for (i = 0; i < n; i++) {
        scanf("%i %i %i %i %i", &a, &b, &c, &d, &x);
        printf("%i %i %i %i\n", cubo(x), quadrado(x), multiplica(c,x), pol_cubo(a, b, c, d, x));
        }
    return 0;
}