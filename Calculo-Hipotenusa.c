#include <stdio.h>
#include <math.h>

int main() {
    // Variables
    float cateto1;
    float cateto2;
    float hipotenusa;

    // Ingreso de datos
    printf("Ingrese el valor del cateto 1: ");
    scanf("%f", &cateto1);
    printf("Ingrese el valor del cateto 2: ");
    scanf("%f", &cateto2);

    // Calculo de la hipotenusa
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Resultado
    printf("El valor de la hipotenusa es: %.2f", hipotenusa);

    return 0;
}