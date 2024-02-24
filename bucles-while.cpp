#include <iostream>

int main() {
    int numero;

    printf ("Es un programa que puedes ingresar numeros (se finalizara el programa cuando el numero sea igual a 0)\n");

    printf ("Ingrese sus numeros, por favor: ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
    }

    printf("Se ingreso el numero 0. El programa ha finalizado.\n");
    return 0;
}