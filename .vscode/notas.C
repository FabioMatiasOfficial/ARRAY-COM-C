#include <stdio.h>

int main(){
    int notas[5]; // Declara um array de 5 posições para armazenar as notas
    int i ;       // Variável de controle para o loop(repetição)

    //entrada do usuário
    printf("Digite 5 notas:\n");

    for (i=0; i < 5; i++){
        scanf("%d",&notas[i]); // Lê uma nota e armazena na posição i do array
    
    }
    // Exibição
    printf("\n Notas digitadas:\n");

    for (i =0; i <5; i++){
        printf("%d"\n, notas[i]); // Imprime a nota da posição i
    }

    return 0;

}