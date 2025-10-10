#include <stdio.h>

int main(){
    char nome[50];    // Array de caracteres para armazenar nome
    int idade;      // Variável para idade
                  // Entrada:
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Olá %s , você tem %d anos!\n , nome,idade");

if(idade <18){
    printf("Você só pode dirigir bicicleta, piazinho! ");
}
if(idade >110){
    printf("Você ainda está vivo? ");
}

else
    return 0;
}