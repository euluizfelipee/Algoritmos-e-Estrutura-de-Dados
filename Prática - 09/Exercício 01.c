/*Faça um programa que lê da entrada padrão um inteiro N que corresponde ao tamanho da matriz. Em seguida, o programa
deverá ler uma matriz quadrada, M, de tamanho N x N. O programa deve imprimir a adição de matrizes M + M.
    Entrada:
    A entrada inicia com uma linha contendo o número inteiro N (0 < N ≤ 10) seguido de N
    linhas. Cada uma das linhas descreve uma linha da matriz e contendo N números reais
    (double).
    Saída:
    Imprima a matriz de resposta em N linhas, cada linha deve imprimir cada elemento (número)
    separado por um espaço em branco. Use uma casa decimal.
    */

#include <stdio.h>

int main(void){
    int i, j;
    int n;
    scanf("%d", &n);
    double m[n][n], s[n][n];
    
    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            s[i][j] = m[i][j] + m[i][j];
        }
    }
    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            printf("%.1lf ", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}