/*Para doar sangue é necessário ter entre 18 e 72 anos.
Homens podem doar sangue 4 vezes ao ano.
Mulheres podem doar apenas 5 vezes ano ano.
Apenas pessoas com mais de 42 Kg podem ser doadoras de sangue.
Faça um programa que solicite ao usuário as seguintes informações:
    1. idade
    2. peso
    3. genero (m ou f)
    4. vezes que doou sangue este ano
Com base nas regras definidas, responder se uma pessoa pode ou não ser doadora de sangue.*/
#include<stdio.h>
int main(void){
    int idade;
    int quantidadeDoacoes;
    char genero;
    float peso;

    scanf("%d", &idade);
    scanf("%f", &peso);
    scanf(" %c", &genero); //limpar o buffer
    scanf("%d", &quantidadeDoacoes);

   if(idade>=18 && idade<=72 && peso>=42){
        if(genero == 'm'){
            if(quantidadeDoacoes < 4){
                printf("Pode ser doador");
            }
            else{
                printf("Nao pode ser doador");
            }
        }
        else if(genero == 'f'){
            if(quantidadeDoacoes < 5){
                printf("Pode ser doador");
            }
            else{
                printf("Nao pode ser doador");
            }
        }
        else{
            printf("Genero invalido");
        }
   }
   else{
    printf("Nao pode ser doador");
   }
   return 0;
}