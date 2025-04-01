#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        // O valor de 'i' nunca é incrementado
    }
   
    return 0;
}