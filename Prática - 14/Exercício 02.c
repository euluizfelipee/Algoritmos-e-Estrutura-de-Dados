/*Implemente uma função recursiva para multiplicar dois números inteiros e retornar o resultado da multiplicação. 
Nome da função multiplicacao_recursiva
*/
#include <stdio.h>

int multiplicacao_recursiva(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiplicacao_recursiva(a, b - 1);
    } else {
        return -multiplicacao_recursiva(a, -b);
    }
}
int main(void){ 	
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    printf("Multiplicacao recursiva: %d", multiplicacao_recursiva(v1,v2));
    return 0;
}