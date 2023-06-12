/*Implemente a função aloca_matriz_quadrada que aloca dinamicamente uma matriz quadrada de inteiros de tamanho n X n.
*/
#include<stdio.h>
#include<stdlib.h>

int** aloca_matriz_quadrada(int n){
    int** matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
    }
    return matriz;
}
int main(void){
    	
    int n, i, j, **p;
    scanf("%d", &n);
    p = aloca_matriz_quadrada(n);
    \t
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                p[i][j] = (i*n) + (j+1);
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    return 0;
}