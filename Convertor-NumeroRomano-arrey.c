#include <stdio.h>

int main() {
    int NUMERO, UNIDADES, DECENAS, CENTENAS, MILLAR;
    printf("Digite un numero: ");
    scanf("%i", &NUMERO);

    UNIDADES = NUMERO % 10;
    NUMERO = NUMERO / 10;
    DECENAS = NUMERO % 10;
    NUMERO = NUMERO / 10;
    CENTENAS = NUMERO % 10;
    NUMERO = NUMERO / 10;
    MILLAR = NUMERO % 10;

    // Valores de los números romanos
    const char* unidades_romanos[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    const char* decenas_romanos[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
    const char* centenas_romanos[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
    const char* millar_romanos[] = { "", "M", "MM", "MMM" };

    // Conversión a números romanos
    printf("%s%s%s%s\n", millar_romanos[MILLAR], centenas_romanos[CENTENAS], decenas_romanos[DECENAS], unidades_romanos[UNIDADES]);

    return 0;
}
