/*Leia 2 valores inteiros positivos (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
Para saber se os números são múltiplos entre si, basta dividir o maior pelo menor, se o resto for zero, eles são múltiplos entre si.
Entrada:  2 valores inteiros positivos.
Saída: deve conter uma das mensagens conforme descrito acima.*/

#include<stdio.h>

int main(void){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a % b == 0){
        printf("São Multíplos");
    }
    else{
        printf("Não são Multíplos");
    }
    return 0;
}