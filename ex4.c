#include <stdio.h>
#include "igualdade.h"

int main(void) {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    if(igual(a, b) == 0) {
        printf("Os números são diferentes\n");
        maior(a, b);
        menor(a,b);
    } else {
        printf("Os números são iguais\n");
    }
}