#include <stdio.h>

int main() {
    // Tasas de cambio (valores aproximados)
    const float USD_TO_GTQ = 7.75;  // 1 USD = 7.75 GTQ
    const float EUR_TO_GTQ = 8.50;  // 1 EUR = 8.50 GTQ
    const float USD_TO_EUR = 0.91;  // 1 USD = 0.91 EUR

    int opcion;
    float cantidad, resultado;

    // Menú de opciones
    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales (GTQ) a Dólares (USD)\n");
    printf("2. Quetzales (GTQ) a Euros (EUR)\n");
    printf("3. Dólares (USD) a Quetzales (GTQ)\n");
    printf("4. Dólares (USD) a Euros (EUR)\n");
    printf("5. Euros (EUR) a Quetzales (GTQ)\n");
    printf("6. Euros (EUR) a Dólares (USD)\n");
    printf("Seleccione una opción (1-6): ");
    scanf("%d", &opcion);

    // Validar la opción seleccionada
    if (opcion < 1 || opcion > 6) {
        printf("Opción no válida. Saliendo del programa.\n");
        return 1;  // Terminar el programa con código de error
    }

    // Solicitar la cantidad a convertir
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Realizar la conversión según la opción seleccionada
    switch (opcion) {
        case 1:
            resultado = cantidad / USD_TO_GTQ;
            printf("%.2f GTQ = %.2f USD\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / EUR_TO_GTQ;
            printf("%.2f GTQ = %.2f EUR\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad * USD_TO_GTQ;
            printf("%.2f USD = %.2f GTQ\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * USD_TO_EUR;
            printf("%.2f USD = %.2f EUR\n", cantidad, resultado);
            break;
        case 5:
            resultado = cantidad * EUR_TO_GTQ;
            printf("%.2f EUR = %.2f GTQ\n", cantidad, resultado);
            break;
        case 6:
            resultado = cantidad / USD_TO_EUR;
            printf("%.2f EUR = %.2f USD\n", cantidad, resultado);
            break;
    }

    return 0;  // Terminar el programa correctamente
}