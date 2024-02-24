#include <iostream>

bool esPrimo(int numero) {
    if(numero <= 1) {
        return false;
    }
    for(int i = 2; i * i <= numero; ++i) {
        if(numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 0;
    int numero = 2;

    std::cout << "Los primeros 10 numeros primos son:\n";

    while (contador < 10) {
        if (esPrimo(numero)) {
            std::cout << numero << " ";
            ++contador;
        }
        ++numero;
    }

    std::cout << std::endl;

    return 0;
}
