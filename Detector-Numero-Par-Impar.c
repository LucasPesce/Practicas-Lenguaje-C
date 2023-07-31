#include <stdio.h>

// Función para determinar si un número es par o impar
void determinarParImpar(int numero) {
    if (numero % 2 == 0) {
        printf("El numero es par.\n");
    } else {
        printf("El numero es impar.\n");
    }
}

int main() {
    int numeroIngresado;

    printf("Ingrese un numero: ");
    scanf("%i", &numeroIngresado);

    determinarParImpar(numeroIngresado);

    return 0;
}