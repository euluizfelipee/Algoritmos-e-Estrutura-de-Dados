/*Faça um programa que receba um texto (aceitar espaços) contendo apenas letras minúsculas dentro do intervalo
 a-z. Em seguida, substitua cada caractere pelo seu sucessor em maiúsculo.*/

#include <stdio.h>
#include <string.h>

int main(void){
    char frase[50];
    scanf(" %[^\n]s", frase);
    int i;
    
    for(i=0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            int c = frase[i];
            c = c - 32 + 1;
            if(c > 90) c = 65;
            printf("%c", c);
        }
        else{
            printf(" ");
            
        }
    }
    return 0;
}