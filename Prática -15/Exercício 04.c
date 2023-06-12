/*
Escreva a  função abaixo:
void lerItensDaLista(FILE *arq)
que recebe como parâmetro um ponteiro para o arquivo arq. A função deverá ler os itens de compras gravados no
arquivo-texto apontado por arq e apresentar na tela.
Dica: para ler os dados do arquivo use a função fscanf().
*/
#include<stdio.h>
#include<stdlib.h>

void lerItensDaLista(FILE *arq) {
    char item[100];

    while (fscanf(arq, "%s", item) != EOF) {
        printf("%s\n", item);
    }
}
int main(void){
    	
    FILE *arq;
    arq = fopen("ListaCompras.txt", "w+");
    \t
    fprintf(arq, "%s\n", "Leite");
    fprintf(arq, "%s\n", "Pao");
    fprintf(arq, "%s\n", "Presunto");
    fprintf(arq, "%s\n", "Manteiga");
    \t
    rewind(arq);
    \t
    lerItensDaLista(arq);
    fclose(arq);
    return 0;
}