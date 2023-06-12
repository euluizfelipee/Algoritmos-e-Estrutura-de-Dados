/*
Implemente as duas funções abaixo:
void gravaNoArquivo(FILE *fp, int v[], int n)
que recebe como parâmetro um ponteiro para arquivo fp, um vetor de inteiros v, e um inteiro n que representa a quantidade
de elementos de v. A função deverá salvar os valores de v no arquivo-texto apontado por fp. 
int somaArquivo(FILE *fp)
que recebe um ponteiro de arquivo contendo números inteiros (por exemplo, o arquivo preenchido pela função gravaNoArquivo),
e retorna a soma dos valores contidos neste arquivo. Veja o exemplo abaixo.
    Dicas:
    - Não esqueça de voltar o ponteiro de arquivo para o início (função rewind) após gravar os números no arquivo!
    */

#include<stdio.h>
#include<stdlib.h>
  void gravaNoArquivo(FILE *fp, int v[], int n) {
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d\n", v[i]);
    }
    rewind(fp);
}

int somaArquivo(FILE *fp) {
    int soma = 0;
    int num;

    while (fscanf(fp, "%d", &num) == 1) {
        soma += num;
    }

    rewind(fp);
    return soma;
}

int main(void){
    int v[] = {-1000, 100};
    FILE *fp = fopen("arquivo.txt","w+");
    gravaNoArquivo(fp,v,2);
    printf("Soma = %d\n",somaArquivo(fp));
    fclose(fp);
    return 0;
}