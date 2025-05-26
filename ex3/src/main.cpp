#include <iostream>
#include "ClaseVector.hpp"
#include "ClaseEtiquetadora.hpp"


int main() {
    ClaseVector<double> vectorDoubles {};
    ClaseVector<std::string> vectorStrings {};
    ClaseVector<std::vector<int>> matriz {};

    vectorDoubles.agregarValor(1.3f);
    vectorDoubles.agregarValor(2.1f);
    vectorDoubles.agregarValor(3.2f);

    vectorStrings.agregarValor("Hola");
    vectorStrings.agregarValor("Mundo");

    matriz.agregarValor(std::vector<int>{1, 2});
    matriz.agregarValor(std::vector<int>{3, 4});


    ClaseEtiquetadora json {vectorDoubles, vectorStrings, matriz};

    json.mostrarJSON();
    
    return 0;
}