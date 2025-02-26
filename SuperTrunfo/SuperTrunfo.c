#include <stdio.h>

int main(){

    // Informações das Cartas:

    //POP: População
    //PT: Número de pontos Turísticos
    //EST: Estado
    //COD: Código da Carta
    //CID: Nome da Cidade
    //AREA: Área em km²
    //PIB: PIB

    int POP1, POP2, PT1, PT2, COD1, COD2;
    char EST1, EST2;
    char CID1[50], CID2[50];
    float AREA1, AREA2, PIB1, PIB2;

    // Diálogo:

    int jogar;
    int continuar;

    // Boas Vindas:

    printf("\nOlá, seja bem vindo ao Super Trunfo 2025! Caso queira jogar digite '1' !\n");
    scanf("%d", &jogar);

    // Como jogar:

    printf("\n");
    printf("Primeiro irei ensinar como jogar!\n");
    printf("O tema do Super Trunfo desse ano é Países!\n");
    printf("Cada país será dividido em oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n");

    printf("\nCada carta de cidade apresentará as seguintes informações:\n");
    printf("\n");
    printf("População : número de habitantes da cidade.\n");
    printf("\n");
    printf("Área : área total da cidade em quilômetros quadrados (km²).\n");
    printf("\n");
    printf("PIB : produto interno bruto da cidade, representando a soma de todos os bens e serviços produzidos no município.\n");
    printf("\n");
    printf("Número de pontos turísticos : quantidade de pontos turísticos famosos na cidade.\n");

    // Primeira Carta:

    printf("Muito bem, vamos registrar suas cartas! Para continuar digite '1' ! ");
    scanf("\n%d", &continuar);

    printf("\nPara começar a registrar sua primeira carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST1);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD1);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID1);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP1);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA1);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB1);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT1);

    // Segunda Carta:

    printf("\nPara começar a registrar sua segunda carta escolha um estado, entre a letra A até H!\n");
    scanf(" %c", &EST2);

    printf("\nMuito bem, agora que você escolheu um estado, escolha um número para essa carta(entre 01 e 04)!\n");
    scanf("%d", &COD2);

    printf("\nBoa, agora escolha um nome para a cidade, uma única palavra!\n");
    scanf("%s", &CID2);

    printf("\nÓtimo nome, agora escolha o tamanho da população de sua cidade!\n");
    scanf("%d", &POP2);

    printf("\nOk, agora escolha o tamanho da sua cidade em km²!\n");
    scanf("%f", &AREA2);

    printf("\nÓtimo, agora escolha um PIB para sua cidade!\n");
    scanf("%f", &PIB2);

    printf("\nÓtimo, agora escolha o número de pontos turísticos que sua cidade terá!\n");
    scanf("%f", &PT2);

    printf("\n");

    // Resultado do Jogo

    // Resultado População

    if (POP1 > POP2)
    {
        printf("%s ganhou em quesito População!\n", &CID1);
        printf("\n");
        printf("%s:" "%d\n", CID1, POP1);
        printf("%s:" "%d\n", CID2, POP2);
        printf("\n");
    }
    else
        if (POP1 < POP2) {
        printf("%s ganhou em quesito População!\n", &CID2);
        printf("\n");
        printf("%s:" "%d\n", CID2, POP2);
        printf("%s:" "%d\n", CID1, POP1);
        printf("\n");
        }
        else {
            printf("Empate, mesma quantidade em quesito População!\n");
            printf("\n");
        }
            
    // Resultado Tamanho em km²

    if (AREA1 > AREA2)
    {
        printf("%s ganhou em quesito Área!\n", &CID1);
        printf("\n");
        printf("%s:" "%f\n", CID1, AREA1);
        printf("%s:" "%f\n", CID2, AREA2);
        printf("\n");
    }
    else 
        if (AREA1 < AREA2) {
        printf("%s ganhou em quesito Área!\n", &CID2);
        printf("\n");
        printf("%s:" "%f\n", CID2, AREA2);
        printf("%s:" "%f\n", CID1, AREA1);
        printf("\n");
        }
        else {
            printf("Empate, mesma quantidade em quesito Área!\n");
            printf("\n");
        }

    // Resultado PIB

    if (PIB1 > PIB2)
    {
        printf("%s ganhou em quesito PIB!\n", &CID1);
        printf("\n");
        printf("%s:" "%d\n", CID1, PIB1);
        printf("%s:" "%d\n", CID2, PIB2);
        printf("\n");
    }
    else 
        if (PIB1 < PIB2) {
        printf("%s ganhou em quesito PIB!\n", &CID2);
        printf("\n");
        printf("%s:" "%f\n", CID2, PIB2);
        printf("%s:" "%f\n", CID1, PIB1);
        printf("\n");
        }
        else {
            printf("Empate, mesma quantidade em quesito PIB!\n");
            printf("\n");
        }

    // Resultado Pontos Turisticos

    if (PT1 > PT2)
    {
        printf("%s ganhou em quesito Pontos Turisticos!\n", &CID1);
        printf("\n");
        printf("%s:" "%d:\n", CID1, PT1);
        printf("%s:" "%d:\n", CID2, PT2);
        printf("\n");
    }
    else 
        if (PT1 < PT2) {
        printf("%s ganhou em quesito Pontos Turisticos!\n", &CID2);
        printf("\n");
        printf("%s:" "%d\n", CID2, PT2);
        printf("%s:" "%d\n", CID1, PT1);
        printf("\n");
        }
        else {
            printf("Empate, mesma quantidade em quesito Pontos Turísticos!\n");
            printf("\n");
        }
    

    printf("\n\n");
    printf("Esse foi o jogo, obrigado por jogar, atualizações em breve! Desenvolvedor: Lucas Ravi");
    printf("\n");

    return 0;


}