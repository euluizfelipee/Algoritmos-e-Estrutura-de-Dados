/*Para esse exercício, você deverá fazer:
a) Definir as structs cliente e endereco da seguinte forma:
    - struct endereco deve conter os campos rua, cidade, estado e número.
    - struct cliente deve conter os campos id, nome, telefone e ender (use o tipo criado anteriormente).
b) Escreva a função ler_cliente que recebe um vetor de clientes e o tamanho como parâmetro e faz a leitura dos dados.
c) Faça a função busca_cliente que recebe um vetor de clientes com o tamanho. Sua função deve ler um id a ser buscado 
e imprimir somente os dados do cliente com o id lido.
*/

typedef struct endereco endereco;
typedef struct cliente cliente;
#include <stdio.h>
#include <string.h>

// Definindo as structs
struct endereco {
    char rua[100];
    char cidade[100];
    char estado[100];
    int numero;
}

struct cliente {
    int id;
    char nome[100];
    char telefone[100];
    struct endereco ender;
};

// Função para ler os dados dos clientes
void ler_cliente(struct cliente pessoas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
       // printf("Digite o ID do cliente %d: ", i + 1);
        scanf("%d", &pessoas[i].id);
       // printf("Digite o nome do cliente %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        //printf("Digite a rua do cliente %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].ender.rua);
        //printf("Digite a cidade do cliente %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].ender.cidade);
        //printf("Digite o estado do cliente %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].ender.estado);
        //printf("Digite o número da residência do cliente %d: ", i + 1);
        scanf("%d", &pessoas[i].ender.numero);
        //printf("Digite o telefone do cliente %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].telefone);
    }
}

void buscar_cliente(struct cliente pessoas[], int tamanho) {
    int id;
    scanf("%d", &id);

    for (int i = 0; i < tamanho; i++) {
        if (pessoas[i].id == id) {
            printf("%d - %s\n", pessoas[i].id, pessoas[i].nome);
            printf("%s, %d\n", pessoas[i].ender.rua, pessoas[i].ender.numero);
            printf("%s - %s\n", pessoas[i].ender.estado, pessoas[i].ender.cidade);
            printf("Tel: %s\n", pessoas[i].telefone);
            return;
        }
    }
    printf("Cliente com o ID %d não encontrado.\n", id);
}
int main(void){
    cliente pessoas[3];
    ler_cliente(pessoas, 3);
    buscar_cliente(pessoas, 3);
    return 0;
}