/*Construa um programa para registrar a entrada de grãos em uma cerealista. Para isso faça:
    - Defina uma struct produtor_t com os seguintes campos:
        -codProdutor tipo inteiro;
        -grao char; //F - feijão, M-milho, S-soja ou T-trigo
        -quantidade tipo float;
    - Escreva a função le_graos que recebe o endereço de um vetor do tipo produtor_t e faz a leitura dos dados para 
    uma determinada posição do vetor;
    - Escreva a função imprime_totais que recebe o endereço de um vetor do tipo produtor _t, o tamanho do vetor do 
    tipo int e imprime na saída padrão os totais de toneladas de cada grão;
    - Escreva a função principal, leia da entrada padrão o tamanho para um vetor, declare um vetor do tipo produtor_t 
    e faça as chamadas das funções de leitura e apresentação de dados.
    */
   typedef struct produtor_t produtor;
#include <stdio.h>

struct produtor_t {
    int codProdutor;
    char grao;  // F - feijão, M - milho, S - soja ou T - trigo
    float quantidade;
};

void le_graos(struct produtor_t *produtores) {
    printf("Informe o codigo do produtor:");
    scanf("%d", &(produtores->codProdutor));
    printf("\nInforme o grao[F,M,S,T]:");
    scanf(" %c", &(produtores->grao));
    printf("\nInforme a quantidade de toneladas:");
    scanf("%f", &(produtores->quantidade));
    printf("\n");
}

void imprime_totais(struct produtor_t *produtores, int tamanho) {
    float totalFeijao = 0.0, totalMilho = 0.0, totalSoja = 0.0, totalTrigo = 0.0;

    for (int i = 0; i < tamanho; i++) {
        switch (produtores[i].grao) {
            case 'F':
                totalFeijao += produtores[i].quantidade;
                break;
            case 'M':
                totalMilho += produtores[i].quantidade;
                break;
            case 'S':
                totalSoja += produtores[i].quantidade;
                break;
            case 'T':
                totalTrigo += produtores[i].quantidade;
                break;
        }
    }
    printf("\nTotal de toneladas dos Produtos:\n");
    printf("Feijao: %.2f\n", totalFeijao);
    printf("Milho: %.2f\n", totalMilho);
    printf("Soja: %.2f\n", totalSoja);
    printf("Trigo: %.2f\n", totalTrigo);
}
int main(void){
    	
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    printf("\n");
    produtor entrada[n];
        for(int i=0;i<n;i++){
            le_graos(&entrada[i]);
    }
    imprime_totais(entrada, n);
    return 0;
}