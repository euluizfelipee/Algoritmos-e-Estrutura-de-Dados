/*Nesta questão você deve implementar duas funções: inverter e printVetor. A função inverter recebe por parâmetro 
um vetor de inteiros e o número de elementos e, deve inverter a ordem dos elementos, de forma que o primeiro se torne o
 último, o segundo se torne o penúltimo, e assim, sucessivamente. A função printVetor recebe um vetor de inteiro e o 
 número de elementos e, imprime na saída padrão todo os elementos do vetor separados por um espaço.
 */

#include<stdio.h>

void inverter(int vetor[], int n){
    int i, aux;
    for(i=0; i < n /2; i++){
        aux = vetor[i];
        vetor[i]= vetor[n-i-1];
        vetor[n-i-1] = aux;
    }
}
void printVetor(int vetor[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main(void){
    int n;
    scanf("%d", &n);
    int vetor[n];
	
    for (int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    inverter(vetor, n);
    printVetor(vetor, n);
    return 0; 
}