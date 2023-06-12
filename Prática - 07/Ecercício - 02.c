/*Faça um programa em C que leia um valor inteiro N que representa o tamanho do vetor. Após isso, defina um vetor de float de tamanho N. O programa deve fazer a leitura de N valores e salvá-los no vetor. Em seguida, o programa deve ler um valor float X. Por fim, o programa deve mostra somente os valores menores que X (com duas casas decimais) e a posição do vetor em que elas estão.
    Entrada:
    Um valor inteiro N, seguido de N valores float e, ao final, um float X.
    Saída:
    Os valores menores que X do vetor e a sua respectiva posição no vetor.*/

#include<stdio.h>

int main (void){
    int n, i;
    scanf ("%d", &n);
    float vetor_x[n], x;   

    for (i = 0; i < n; i++){
        scanf ("%f", &vetor_x[i]);
    }
        scanf ("%f", &x);
    for(i = 0; i < n; i++){
            if (vetor_x[i] < x){
                 printf("V[%d] = %.2f\n", i, vetor_x[i]);
            }
        }
    return 0; 
}