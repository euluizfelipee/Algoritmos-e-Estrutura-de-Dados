/*Crie a função max que receba um vetor de double e seu tamanho e retorne um ponteiro para a 
posição de maior valor no vetor.
*/
#include<stdio.h>
#include<stdlib.h>

double* max(double *um, int tam){
    if(tam <=0 ){
        return NULL;
    }   
    double *p_max = &um[0];
    
    for(int i= 0; i < tam; i++){
        if(um[i] >*p_max){
            p_max = &um[i];
        }
    }
        return p_max;
}
int main(void){
    double v[5]={2.6, 13.2, 1.65, 0.99, 11.9};
    double *p_max;
    p_max = max (v, 5);
    printf("%.2lf\n", *p_max);
    return 0;
}