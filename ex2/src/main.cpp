#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Punto.hpp"
#include "Rectangulo.hpp"
#include "ProcesadorFigura.hpp"

#include <iostream>

int main() {
    Punto centro{1 , 1};
    Circulo circ{centro, 6};
    Elipse elip{centro, 3, 6};
    Rectangulo rect{centro, 4, 6};

    ProcesadorFigura<Punto> procPunto{centro};
    ProcesadorFigura<Circulo> procCirculo{circ};
    ProcesadorFigura<Elipse> procElipse{elip};
    ProcesadorFigura<Rectangulo> procRectangulo{rect};

    std::cout << "Area Punto: " << procPunto.calcularArea() << std::endl;
    std::cout << "Area Circulo: " << procCirculo.calcularArea() << std::endl;
    std::cout << "Area Elipse: " << procElipse.calcularArea() << std::endl;
    std::cout << "Area Rectangulo: " << procRectangulo.calcularArea() << std::endl;

    return 0;
}

