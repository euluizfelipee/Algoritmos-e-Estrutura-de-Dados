/*
Faça a função recursiva inverter para imprimir uma string do fim para o início.
Dica: passar o índice por parâmetro, imprimir a letra atual somente após a chamada da função recursiva, 
critério de parada é o caractere finalizador de strings.
*/
#include <stdio.h>
#include<string.h>
char string[100];

void inverter(int x) {
    if (string[x] == '\0'){
        return;
        }
        else{
            inverter(x+1);
            printf("%c", string[x]);
        }
}
int main(void){
    scanf("%s", string);
    inverter(0);
    return 0;
}