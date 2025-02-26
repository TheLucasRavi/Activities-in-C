#include <stdio.h>

int main(){

    char nome[20];
    int idade;
    float altura;
    int peso;
    char opcao[20];

    printf("\nQual o seu nome?\n");
    scanf("%s", &nome);
    printf("\nQual a sua idade?\n");
    scanf("%d", &idade);
    printf("\nQual a sua altura?\n");
    scanf("%f", &altura);
    printf("\nQual o seu peso?\n");
    scanf("%d", &peso);
    printf("\nVocê aceita os termos de responsabilidade do nosso site?\n");
    scanf(" %s", &opcao);
    printf("\n\n");
    printf("Cadastro realizado com sucesso!\n\n");
    printf("Suas informações:\n\n");
    printf("Nome: %s\n", nome);
    printf("Altura: %f\n", altura);
    printf("Peso: %d\n", peso);
    printf("Termos: %s\n", opcao);
    printf("\n\n");
    printf("Obrigado por se cadastrar em nosso site!");
    printf("\n");

    //sintaxe scanf
    //scanf(''formato''', &variavel);

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