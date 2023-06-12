/*Crie a função achar que receba um ponteiro genérico e uma string. A sua função deve fazer uma busca na string para
encontrar a primeira vogal. A busca deve iniciar pelo índice que está na variável a qual o ponteiro genérico aponta.
Ao encontrar a vogal, você deve salvar no ponteiro genérico o endereço de memória onde está essa vogal e retornar o
ponteiro. Caso a string não tenha vogais, salvar no ponteiro genérico o endereço da última letra da string.
O valor de início da busca nunca será maior que o tamanho da string.
*/
#include<stdio.h>
#include<stdlib.h>

void * achar(void *p, char *s){
    
    int i, aux = *(int*)p;
    for(i=aux; s[i] !='\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            return &s[i];
        }
    }
    return &s[i-1];    
}
int main(void){
    int n = 0;
    void* p = &n;
    char frase[62] = "algoritmos";
    p = achar(p, frase);
    printf("%c", *(char*) p);
    return 0;
}