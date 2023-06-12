/*
Escreva a função int contaCaracteresArquivo(FILE* arq) que recebe um ponteiro de arquivo previamente aberto na 
parte principal do programa (main) e retorna a quantidade de caracteres presentes nesse arquivo, sem contar o 
finalizador EOF, nem o caractere de quebra de linha ('\n'), e nem espaços em branco.
*/
#include<stdio.h>
#include<stdlib.h>
int contaCaracteresArquivo(FILE* arq) {
    rewind(arq);

    int contador = 0;
    char caractereLido;

    while ((caractereLido = fgetc(arq)) != EOF) {
        if (caractereLido != '\n' && caractereLido != ' ') {
            contador++;
        }
    }

    return contador;
}
int main(void){
    FILE* fp = fopen("teste.txt","w+");
    char *s = "teste";
    fputs(s,fp);
    rewind(fp);
    printf("%d\n",contaCaracteresArquivo(fp));
    fclose(fp);
    return 0;
}