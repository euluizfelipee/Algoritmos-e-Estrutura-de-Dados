/*WALL·E e EVE se comunicam passando uma sequencia de números (vetor V ) que indicam posições de caracteres num texto 
(string S). Porém WALL·E está com problemas no seu decodificador e pediu para que você o ajude a se comunicar com EVE,
pois ela certamente vai ajudá-lo com o decodificador. Escreva um programa que dado o vetor V e a string S decodifique
a mensagem transmitida.
    Entrada:
    O caso de teste é composto por três linhas. A primeira linha contém um inteiro 1 ≤ N ≤ 30, indicando o tamanho do 
    vetor V . A segunda linha contém N inteiros em ordem separados por um espaço em branco com os valores do vetor V . 
    A terceira linha contém o texto, S, com até 60 caracteres visíveis.
    Saída:
    Imprima uma linha contendo o texto decodificado*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int N;
    scanf("%d", &N);
    int i;
    int V[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    char S[61];
    scanf(" %[^\n]", S);
    char decoded_message[31];
    int j = 0;
    for (i = 0; i < N; i++) {
        if (V[i] < strlen(S)) {
            decoded_message[j] = S[V[i]];
            j++;
        }
    }
    decoded_message[j] = '\0';
    printf("%s\n", decoded_message);
    return 0;
}
