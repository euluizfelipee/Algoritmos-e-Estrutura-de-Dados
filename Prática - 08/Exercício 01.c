/*Uma versão fácil do jogo da forca foi proposta para auxiliar o aprendizado de crianças com dislexia. Nesta versão apenas as vogais de uma sentença necessitam ser adivinhadas. A você foi dada a tarefa de fazer um programa que dada uma sentença completa monte uma instância do jogo da forca fácil. Seu código deve ler uma linha da entrada padrão num vetor de caracteres e trocar as vogais pelo caractere '\_'. Você pode ignorar acentuação, mas deve considerar vogais minúsculas e maiúsculas.
    Entrada:
    Linha contendo um texto com até 29 caracteres visíveis e espaços em branco.
    Saída:
    Imprima uma linha contendo o texto com as vogais substituídas conforme solicitado.*/

#include <stdio.h>
#include <string.h>

int main(void){
    
   int i;
   char texto[29];
   scanf("%[^\n]", texto);

    for(i=0; i < strlen(texto); i++){
        if(texto[i] == 'A' || texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'U'){
            texto[i] = '_';   
        }
         printf("%c", texto[i]);   
    }
    return 0;
}