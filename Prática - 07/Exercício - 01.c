/*Faça um programa em C que leia um valor inteiro N que representa o tamanho do vetor. Após isso, defina um vetor de double de tamanho N. O programa deve fazer a leitura de N valores double e salvá-los no vetor. Por fim, o programa deve imprimir a posição do vetor e o valor correspondente (com uma casa decimal) em ordem crescente e decrescente.
    Entrada:
    Um valor inteiro N, seguido de N valores double .
    Saída:
    Os valores do vetor em ordem crescente e decrescente.*/

#include<stdio.h>

int main (void){
    int tam, i;
    scanf ("%d", &tam);
    double vetor_n[tam];

        for(i = 0; i < tam; i++){
            scanf("%lf", &vetor_n[i]);
        }
        for(i = 0; i < tam; i++){
            printf("V[%d] = %.1lf\n", i, vetor_n[i]);
        }
        for(i = tam-1; i >= 0; i--){
            printf("V[%d] = %.1lf\n", i, vetor_n[i]);
        }
        return 0;
}