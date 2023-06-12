/*Implemente três funções, chamadas aloca_vetor, le_elementos e print_vetor, de acordo com as seguintes instruções:

    -A função aloca_vetor deve receber por parâmetro um inteiro N e retornar um ponteiro para um vetor de inteiros de tamanho N.
    -A função le_elementos deve receber um vetor de inteiros alocado dinamicamente e um inteiro N (tamanho do vetor). 
        Na sequência, ela deve ler da entrada padrão N inteiros e armazenar no vetor. 
    -A função print_vetor deve receber um vetor de inteiros e um inteiro N (tamanho do vetor). Na sequência, imprimir na saída 
        padrão os elementos do vetor e, também, a média aritmética (duas casas decimais).
*/
#include<stdio.h>
#include<stdlib.h>

int* aloca_vetor(int N) {
    int* vetor = (int*) malloc(N * sizeof(int));
    return vetor;
}
void le_elementos(int* vetor, int N) {
    int i;
    for (i=0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
}
void print_vetor(int* vetor, int N) {
    int soma = 0, i;
    for (i=0; i < N; i++) {
        printf("v[%d]=%d\n", i, vetor[i]);
        soma += vetor[i];
    }
    printf("Media=%.2f\n", (float) soma/N);
}
int main(void){
    int n, *p;
        scanf("%d", &n);
    p = aloca_vetor(n);
    le_elementos(p, n);
    print_vetor(p, n);
    return 0;
}