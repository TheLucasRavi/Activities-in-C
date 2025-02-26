#include <stdio.h>

int main() {
    int temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%d", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%d", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%d", &estoque);

    if (temperatura > 30)
    {
        printf("A temperatura está alta!\n");
    }
    else {
        printf("A temperatura está normal!\n");
    }

    if (umidade > 50)
    {
        printf("Umidade elevada!\n");
    }
    else {
        printf("Umidade normal!\n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque abaixo do mínimo!\n");
    }
    else {
        printf("Estoque normal!\n");
    }

    return 0;
    

}