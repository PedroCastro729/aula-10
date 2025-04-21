#include <stdio.h>
#include "digite.h"
#include "igualdade.h"

int main(void) {
    int a, b, c;

    valor(a);
    valor(b);
    valor(c);

    if(valor(a) > valor(b) && valor(b) > valor(c)) {
        maior(a, b);

        if(valor(a) > valor(c) && valor(c) > valor(b)) {
            maior(a, c);
        
            if(valor(b) > valor(c) && valor(c) > valor(a)) {
                maior(b, c);
        } else{
            printf("Eles são iguais\n");
        }
    }
}
}