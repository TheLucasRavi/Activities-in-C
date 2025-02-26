#include <stdio.h>

int main(){

    int idade = 17;
    float altura = 1.83;
    char opcao = 'S';
    char nome[20] = "Lucas";

    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Opcao: %c\n", opcao);
    printf("Nome: %s\n", nome);


    /*

    printf(“%formato1 %formato2”, variável1, variável2);

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

    */


    return 0;

}