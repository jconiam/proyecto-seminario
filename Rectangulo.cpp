#include "Rectangulo.h"
#include <iostream>

void Rectangulo::IngresarDatos() {
    std::cout << "Ingrese la base del rectángulo: " ;
    std::cin >> base;
    std::cout << "Ingrese la altura del rectángulo: ";
    std::cin >>  altura;
}

float Rectangulo :: CalcularArea(){

    return base * altura;
}


void Rectangulo :: MostrarResultados(){

    std::cout << "El área del rectángulo es: " << CalcularArea() << std::endl;
}