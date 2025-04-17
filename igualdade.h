#include <stdio.h>

int igual(int x, int y) {
    if(x == y){
        return 1;
    } else{
        return 0;
    }
    
}

int maior(int x, int y) {
    if(x > y){
        printf("maior: %d\n", x);
         if(x < y){
            printf("maior: %d\n", y);
        }
    }
    
}

int menor(int x, int y) {
    if(x < y){
        printf("menor: %d\n", x);
         if(x < y){
            printf("menor: %d\n", y);
        }
    }
    
}