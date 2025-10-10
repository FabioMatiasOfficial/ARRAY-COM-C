#include <stdio.h>

int main(){
    char nome[50];   // Array de caracteres para armazenar nome
    int idade;      // Variável para idade

    // Entrada:
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite sua idade: ");
    scanf("%d",&idade);

    printf("\nOlá %s , você tem %d anos!\n , nome, idade");

    return 0;
}