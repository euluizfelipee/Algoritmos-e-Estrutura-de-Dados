/*Faça uma função recursiva somatorio que calcule o somatório dos valores inteiros de 1 até N (1+2+3+4+5+...+N).
*/
#include <stdio.h>

int somatorio(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + somatorio(n - 1);
    }
}
int main(void){
    int n, num;
    scanf("%d", &n);
    num = somatorio(n);
    printf("%d", num);
    return 0;
}