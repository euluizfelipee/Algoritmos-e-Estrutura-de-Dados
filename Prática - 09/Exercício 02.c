/*Faça um programa que lê da entrada padrão um inteiro N que corresponde ao tamanho da matriz. Em seguida, o programa 
deverá ler uma matriz quadrada, M, de tamanho N x N. O programa deve imprimir a multiplicação de matrizes M * M.
    Entrada:
    A entrada inicia com uma linha contendo o número inteiro N (0 < N ≤ 10) seguido de N
    linhas. Cada uma das linhas descreve uma linha da matriz e contendo N números reais
    (double).
    Saída:
    Imprima a matriz de resposta em N linhas, cada linha deve imprimir cada elemento (número)
    separado por um espaço em branco. Use uma casa decimal.

    Cálculo do exemplo 1:
    1 ∗ 1 + 2 ∗ 4 = 9.0
    1 ∗ 2 + 2 ∗ 5 = 12.0
    4 ∗ 1 + 5 ∗ 4 = 24.0
    4 ∗ 2 + 5 ∗ 5 = 33.0
    */
#include<stdio.h>
int main(void){
    int i, j, k;
    scanf("%d", &k);
    double matriz[k][k];
    for(i=0; i < k; i++){
        for(j=0; j<k; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    int m;
    double conta;
    for(i=0; i < k; i++){
        for(j=0; j < k; j++){
            conta = 0;
            for (m=0; m < k; m++){
                conta += matriz[i][m] * matriz[m][j];
            }
            printf("%.1lf ", conta);
        }
        printf("\n");
    }
    return 0;
}