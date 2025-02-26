#include <stdio.h>

int main() {
    int nota1 = 6;
    int media = 6;

    if (nota1 > media)
    {
        printf("Você está na média!");
    }
    else
        if (nota1 < media)
        {
            printf("Você não está na média!");
        }
        else
            printf ("Sua nota é exatamente a média!");
    
    return 0;

}