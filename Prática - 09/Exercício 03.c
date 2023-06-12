/*Faça um código que leia uma matriz 3 x 3 e imprima a matriz transposta. Para imprimir a
matriz transposta, troque as linhas pelas colunas conforme exemplo de entrada e saı́da.
    Entrada:
    O caso de teste é composto por três linhas. Cada linha possui três inteiros descrevendo uma
    linha da matriz.
    Saída:
    Imprima três linhas, cada uma contendo três inteiros (int) separados por um espaço em
    branco, cada linha é a linha da matriz após a troca."'
*/
#include<stdio.h>

int main(void){
	int i, j;
	int matriz_m [3][3];	
	for(i=0; i < 3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matriz_m[i][j]);
		}
	}
	for(i=0; i < 3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriz_m[j][i]);
		}
		printf("\n");
	}	
	return 0;	
}
