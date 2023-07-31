#include <stdio.h>

//FUNCIÓN
float calcularIMC(float peso_kg, float altura_metros) {
    return peso_kg / (altura_metros * altura_metros);
}

int main() {
    //VARIABLES
    float altura_cm, peso_kg;

    //INDICACIONES AL USUARIO
    printf("Ingrese su peso en Kg: ");
    scanf("%f", &peso_kg);

    printf("Ingrese su altura en Centimetros: ");
    scanf("%f", &altura_cm);

    //CONVERSOR DE CM A METROS
    float altura_metros = altura_cm / 100.0;

    //LLAMADO A LA FUNCION
    float IMC = calcularIMC(peso_kg, altura_metros);

    // MOSTRAR RESULTADOS
    printf("IMC: %.2f\n", IMC);

    // CONDICIONES
    if (IMC < 18.5)
        printf("Bajo peso.\n");
    else if (IMC < 24.9)
        printf("Rango saludable.\n");
    else if (IMC < 29.9)
        printf("Sobrepeso.\n");
    else
        printf("Obesidad.\n");

    return 0;
}