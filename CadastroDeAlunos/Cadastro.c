#include <stdio.h>

int main(){

    int nome[50], idade, peso, matricula;
    float altura;

    // Perguntas:

    printf("Qual o seu nome?\n");
    scanf("%s", &nome);

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

    printf("Qual o seu peso?\n");
    scanf("%d", &peso);

    printf("Qual o número da sua matrícula?");
    scanf("%d", &matricula);

    //Aluno:

    printf("Nome do Aluno: %s", nome);
    printf("Idade do Aluno: %d", idade);
    printf("Altura do Aluno: %f", altura);
    printf("Peso do Aluno: %d", peso);
    printf("Matrícula do Aluno: %d", matricula);


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