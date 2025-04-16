#include <stdio.h>
#include "util.h"

double diametro(double raio);

double circunferencia(double raio);

double area(double raio);

int main(void){
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);
    
    double diam = diametro(raio);
    printf("O diâmetro é: %lf\n", diam);
    double circ = circunferencia(raio);
    printf("A circunferência é: %lf\n", circ);
    double areab = area(raio);
    printf("A área é: %lf\n", areab);

    return 0;
}
