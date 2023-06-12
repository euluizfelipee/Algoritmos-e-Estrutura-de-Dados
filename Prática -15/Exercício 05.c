/*
Considere um programa que registra apostas similar a Mega-Sena utilizando a seguinte estrutura:
typedef struct Aposta{
  int nroCartao; 
  int dezenas[6];
}APOSTA;
Onde:
nroCartao: é o número do cartão da aposta;
dezenas: são 6 números entre 1 e 60.
Escreva as seguintes funções para esse programa:
1) int *lerDezenasDoCartao(FILE *arq, int cartao): que lê um arquivo binário que contém as apostas e retorna um
vetor com as dezenas do cartão passado por parâmetro;

2) void mostrarDezenasDoCartao(int *v, int tam):  mostra na saida padrão as dezenas do cartão que estão no vetor passado
por parâmetro.  Quando o ponteiro do vetor é igual a NULL, ou seja, o cartão não foi localizado na função anterior, 
apresentar na saída padrão a frase "Dezenas nao localizadas.".
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Aposta{
  int nroCartao; 
  int dezenas[6];
} APOSTA;

int *lerDezenasDoCartao(FILE *arq, int cartao) {
    APOSTA aposta;
    while (fread(&aposta, sizeof(struct Aposta), 1, arq) == 1) {
        if (aposta.nroCartao == cartao) {
            int *dezenas = malloc(6 * sizeof(int));
            for (int i = 0; i < 6; i++) {
                dezenas[i] = aposta.dezenas[i];
            }
            return dezenas;
        }
    }
    return NULL;
}

void mostrarDezenasDoCartao(int *v, int tam) {
    if (v == NULL) {
        printf("Dezenas nao localizadas.\n");
    } else {
        for (int i = 0; i < tam; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
    }
}

int main(void){
    FILE *arq;
    arq = fopen("Apostas.bin", "a+b");

    APOSTA aposta;
    aposta.nroCartao = 1548;
    aposta.dezenas[0] = 4;
    aposta.dezenas[1] = 5;
    aposta.dezenas[2] = 10;
    aposta.dezenas[3] = 12;
    aposta.dezenas[4] = 14;
    aposta.dezenas[5] = 25;
    fwrite(&aposta,sizeof(struct Aposta),1,arq);

    aposta.nroCartao = 2107;
    aposta.dezenas[0] = 1;
    aposta.dezenas[1] = 2;
    aposta.dezenas[2] = 18;
    aposta.dezenas[3] = 33;
    aposta.dezenas[4] = 49;
    aposta.dezenas[5] = 51;
    fwrite(&aposta,sizeof(struct Aposta),1,arq);

    rewind(arq);
    int cartao = 1548;

    int *dezenas = lerDezenasDoCartao(arq, cartao);
    mostrarDezenasDoCartao(dezenas, 6);
    fclose(arq);
    return 0;
}