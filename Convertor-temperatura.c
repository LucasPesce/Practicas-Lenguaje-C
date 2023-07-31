#include <stdio.h>

//CONSTANTES
const float CONVERSION_KELVIN = 273.15;
const float CONVERSION_FAHRENHEIT = 32.0;

float main() {
    // VARIABLES
    int celsius;
    float kelvin, fahrenheit;

    // IINDICACIONES AL USUARIO
    printf("Ingrese temperatura en Celsius: ");
    
    // ESCANEO DE LOS DATOS INGRESADOS
    scanf("%i", &celsius);

    // OPERACIONES ARITMETICAS
    kelvin = celsius + CONVERSION_KELVIN;
    fahrenheit = 1.8 * celsius + CONVERSION_FAHRENHEIT;

    // MOSTRAR RESULTADOS
    printf("Temperatura en Kelvin: %.2f\n", kelvin);
    printf("Temperatura en Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}