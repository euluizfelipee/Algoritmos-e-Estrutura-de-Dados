/*Para esse exercício, você deverá fazer:
a) Definir as structs pessoa_s e data_s da seguinte forma:
  - struct data_s deve conter os campos dia, mes e ano do tipo inteiro.
  - struct pessoa_s deve conter:
    > Campo cod de número inteiro,
    > Campo nome como um vetor de caracteres (strings) com capacidade de 64 caracteres,
    > Campo nasc do tipo data_t.

b) Escrever a função read_person que recebe o endereço de uma variável do tipo pessoa_t e faz a leitura dos dados.

c) Escrever a função print_person que recebe uma variável do tipo pessoa_t e imprime os valore na saída padrão no formato
exibido no exemplo abaixo.*/

typedef struct pessoa_s pessoa_t;
typedef struct data_s data_t;
#include <stdio.h>

struct data_s {
    int dia;
    int mes;
    int ano;
};
struct pessoa_s {
    int cod;
    char nome[64];
    struct data_s nasc;
};
void read_person(struct pessoa_s *pessoa) {
    scanf("%d", &(pessoa->cod));

    scanf(" %[^\n]", pessoa->nome);
    scanf("%d %d %d", &(pessoa->nasc.dia), &(pessoa->nasc.mes), &(pessoa->nasc.ano));
}
void print_person(struct pessoa_s pessoa) {
    printf("%d - %s\n", pessoa.cod, pessoa.nome);
    printf("Nascimento: %d/%d/%d\n", pessoa.nasc.dia, pessoa.nasc.mes, pessoa.nasc.ano);
}
int main(void){
    pessoa_t p;
    read_person(&p);
    print_person(p);
    return 0;
}