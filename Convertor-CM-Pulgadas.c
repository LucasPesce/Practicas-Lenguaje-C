#include <stdio.h>

// CONSTANTE - Centimetros por pulgada
const float PULGADA = 2.54; 

// FUNCIÓN
float convertirCentimetrosAPulgadas(float cm) {
    return cm / PULGADA;
}


int main() {
    float centimetros;
    float pulgadas_equivalentes;

    // Indicaciones al usuario
    printf("Ingresar cantidad de centimetros: ");
    
    // Escanea lo datos ingresados
    scanf("%f", &centimetros);

    // Llamando a la función
    pulgadas_equivalentes = convertirCentimetrosAPulgadas(centimetros);

    // Mensaje con los resultados
    printf("Equivalente en pulgadas: %.2f\n", pulgadas_equivalentes);

    return 0;
}