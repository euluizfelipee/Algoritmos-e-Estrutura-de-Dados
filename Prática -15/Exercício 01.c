/*Escreva as duas funções abaixo:
    a) void gravaNoArquivo(FILE *fp, char *v) que recebe como parâmetro um ponteiro para arquivo fp e um ponteiro para o 
    vetor de caracteres v. A função deverá salvar os valores de v no arquivo-texto apontado por fp. Salvar cada caractere
    em uma linha diferente do arquivo. Para isso, inserir o '\n' entre os caracteres que serão salvos no arquivo.
    b) int encontrouCaractereArquivo(FILE* arq, char ch) que recebe um ponteiro de arquivo contendo caracteres (por exemplo, 
    o arquivo preenchido pela função gravaNoArquivo), um caractere a ser pesquisado no arquivo e retorna 1 se o caractere foi 
    encontrado no arquivo e 0 caso contrário. Veja o exemplo abaixo.

Dicas:
        - Não esqueça de voltar o ponteiro de arquivo para o início (função rewind) após gravar os números no arquivo!
        - Caso necessite, saiba que a função int feof(FILE *fp) retorna um valor não-nulo caso o fim do arquivo apontado 
        pelo ponteiro fp seja atingido, e 0 caso contrário.
        */

#include<stdio.h>
#include<stdlib.h>
void gravaNoArquivo(FILE *fp, char *v) {
    fp = fopen("arquivo.txt", "w");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    for (int i = 0; v[i] != '\0'; i++) {
        fprintf(fp, "%c\n", v[i]);
    }
    fclose(fp);
}
int encontrouCaractereArquivo(FILE* arq, char ch) {
    rewind(arq);
    int caractereEncontrado = 0;
    char caractereLido;

    while (!feof(arq)) {
        fscanf(arq, " %c", &caractereLido);
        if (caractereLido == ch) {
            caractereEncontrado = 1;
            break;
        }
    }
    return caractereEncontrado;
}
int main(void){
    char v[10] = "Teste";
    FILE *fp = fopen("arquivo.txt","w+");
    gravaNoArquivo(fp,v);
    char ch = 'e';
    int encontrou = encontrouCaractereArquivo(fp, ch);
    if(encontrou)
    \tprintf("Caractere = %c encontrado no arquivo.\n", ch);
    else
    \tprintf("Caractere = %c nao foi encontrado no arquivo.\n", ch);
    fclose(fp);
    return 0;
}

