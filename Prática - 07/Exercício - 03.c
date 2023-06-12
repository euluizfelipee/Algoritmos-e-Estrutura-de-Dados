/*Faça um programa em C que leia um valor inteiro N que representa o tamanho do vetor. Após isso, defina um vetor de inteiros de tamanho N. O programa deve fazer a leitura de N valores e salvá-los no vetor. Por fim, o programa deve imprimir a posição do vetor e o valor somente dos números pares do vetor.
    Entrada:
    Um valor inteiro N, seguido de N valores inteiros.
    Saída:
    A posição e os valores pares do vetor.*/

#include<stdio.h>
int main (void){
    int tam, i;
    scanf ("%d", &tam);
    int vetor[tam];

        for (i = 0; i < tam; i++)
        {
        scanf ("%d", &vetor[i]);
        }
        for(i = 0; i < tam; i++){
            if(vetor[i] % 2 == 0){
                printf("V[%d] = %.1d\n", i, vetor[i]);
            }
        }
        return 0;
}
