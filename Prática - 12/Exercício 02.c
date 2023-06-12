/*Implemente a função aloca_matriz que aloca dinamicamente uma matriz de inteiros de m linhas e n colunas.
*/
#include<stdio.h>
#include<stdlib.h>
int** aloca_matriz(int m, int n) {
    int** matriz = (int**) malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
    }
    return matriz;
}
int main(void){
    int **p;
    int m, n, i, j;
    scanf("%d %d",&m, &n);
    p = aloca_matriz(m, n);
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                p[i][j] = (i*m) + (j+1);
        }
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                 printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    return 0;
}