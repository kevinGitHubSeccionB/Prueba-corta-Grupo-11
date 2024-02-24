#include <iostream>

int main() {
    int calificacion;

    std::cout << "Ingrese la calificacion numerica (0-100) del estudiante: ";
    std::cin >> calificacion;


    //Calificacion A
    if (calificacion >= 90 && calificacion <= 100) {
        std::cout << "Su calificacion es A. Excelente " << std::endl;


        //Calificacion B
    } else if (calificacion >= 80 && calificacion <= 89) {
        std::cout << "Su calificacion es B. Muy bueno" << std::endl;


        //Calificacion C
    } else if (calificacion >= 70 && calificacion <= 79) {
        std::cout << "Su calificacion es C. Bueno" << std::endl;


        //Calificacion D
    } else if (calificacion >= 60 && calificacion <= 69) {
        std::cout << "Su calificacion es D. Regular" << std::endl;


        //Calificacion F
    } else if (calificacion >= 0 && calificacion <= 59) {
        std::cout << "Su calificacion es F. Reprobado" << std::endl;


        //Si la calificacion es mayor a 100
    } else {
        std::cout << "La calificacion ingresada no es valida. \nDebe estar entre 0 y 100." << std::endl;
    }

    return 0;
}