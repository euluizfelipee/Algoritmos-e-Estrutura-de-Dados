/*Implemente duas funções chamadas printMatriz e processarMatriz.

A função printMatriz deve imprimir uma matriz 3x3 na saída padrão. Para tal, deve receber:
 - um inteiro para representar o número de linhas.
 - um inteiro para representar o número de colunas.
 - a matriz que deverá ser impressa na saída padrão (verifique a formatação nos exemplos abaixo).

A função processaMatriz deve alterar todos os elementos maiores que X por 0 (zero) e retornar o número de alterações realizadas. Para tal, a função deve receber:
 - um inteiro para representar o número de linhas.
 - um inteiro para representar o número de colunas.
 - um inteiro para representar o número X.
 - a matriz que deverá ser processada.
 */
#include <stdio.h>

void printMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int processaMatriz(int linhas, int colunas, int X, int matriz[linhas][colunas]) {
    int i, j, alteracoes = 0;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > X) {
                matriz[i][j] = 0;
                alteracoes++;
            }
        }
    }
int main(void){
    int x, alteracoes=0;
	int matriz[3][3];
	scanf("%d",&x);
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
    alteracoes = processaMatriz(3, 3, x, matriz);
    printMatriz(3, 3, matriz);
    printf("Alteracoes=%d",alteracoes);
}