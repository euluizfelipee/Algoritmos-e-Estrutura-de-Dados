/*Desenvolva um programa que decida sobre o envolvimento de uma pessoa sobre um crime. 
O programa deve receber as seguintes informações do usuário:
    1. Telefonou para a vítima? (s ou n)
    2. Esteve no local do crime? (s ou n)
    3. Mora perto da vítima? (s ou n)
    4. Devia dinheiro para a vítima? (s ou n)
    5. Já trabalhou com a vítima? (s ou n)
O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente entre 1 e 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cumplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".*/
7
#include<stdio.h>
int main(void){
    char telefonou, esteveLocal, moraPerto, deveDinheiro, trabalhou;
    int contador = 0;
    scanf("%c", &telefonou);
    scanf(" %c", &trabalhou);
    scanf(" %c", &moraPerto);
    scanf(" %c", &esteveLocal);
    scanf(" %c", &deveDinheiro);
        if(telefonou == 's'){
            contador++;
        }
        if(esteveLocal == 's'){
            contador++;
        }
        if(moraPerto == 's'){
            contador++;
        }
        if(deveDinheiro == 's'){
            contador++;
        }
        if(trabalhou == 's'){
            contador++;
        }
        if(contador >=1 && contador <=2){
            printf("Suspeito");
        }
        else if(contador >=3 && contador <=4){
            printf("Cumplice");
        }
        else if(contador == 5){
            printf("Assassino");
        }
        else{
            printf("Inocente");
        }
        return 0;
}