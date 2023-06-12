/*
Escreva a função char *findAlphabeticFile(FILE *f) que recebe o ponteiro para um arquivo em f, e retorna o ponteiro 
para um vetor de caracteres, alocado dinamicamente, contendo todos os caracteres alfabéticos (de a...z e A...Z) 
encontrados no arquivo apontado por f, na ordem de ocorrência. No caso de não existir nenhum caractere alfabético no 
arquivo, a função deve retornar um ponteiro nulo (NULL). Veja os exemplos abaixo. 

Observação:
    - Assuma que o ponteiro recebido está no início do arquivo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *findAlphabeticFile(FILE *f){
    rewind(f);

    char *vetor = NULL;
    int tamanhoVetor = 0;
    int contador = 0;
    char caractereLido;

    while ((caractereLido = fgetc(f)) != EOF) {
        if (isalpha(caractereLido)) {
            contador++;
            vetor = realloc(vetor, contador * sizeof(char));
            vetor[tamanhoVetor++] = caractereLido;
        }
    }

    vetor = realloc(vetor, (contador + 1) * sizeof(char));
    vetor[tamanhoVetor] = '\0';
       
    if (contador == 0) {
        free(vetor);
        vetor = NULL;
    }

    return vetor;
}
int main(void){
    FILE *f = fopen("arquivo.txt","w+");
    char frase[] = "Teste 123 Teste 123";
    fprintf(f,"%s",frase);
    rewind(f);
    char *s = findAlphabeticFile(f);
    printf("%s\n",s);
    fclose(f);
    free(s);
    return 0;
}
