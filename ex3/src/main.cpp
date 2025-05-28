#include <iostream>
#include <memory>

#include "BaseVector.hpp"
#include "ClaseVector.hpp"
#include "ClaseEtiquetadora.hpp"


template <typename T>
using ClaseVectorPtr = std::unique_ptr<ClaseVector<T>>;


int main() {
    ClaseVectorPtr<double> vectorDoubles = std::make_unique<ClaseVector<double>>();
    ClaseVectorPtr<std::string> vectorStrings = std::make_unique<ClaseVector<std::string>>();
    ClaseVectorPtr<std::vector<int>> matriz = std::make_unique<ClaseVector<std::vector<int>>>();

    vectorDoubles->agregarValor(1.3f);
    vectorDoubles->agregarValor(2.1f);
    vectorDoubles->agregarValor(3.2f);

    vectorStrings->agregarValor("Hola");
    vectorStrings->agregarValor("Mundo");
    
    matriz->agregarValor(std::vector<int>{1, 2});
    matriz->agregarValor(std::vector<int>{3, 4});


    ClaseEtiquetadora json{};

    json.etiquetarVector("vec_doubles", std::move(vectorDoubles));
    json.etiquetarVector("palabras", std::move(vectorStrings));
    json.etiquetarVector("listas", std::move(matriz));

    json.mostrarJSON();
    
    return 0;
}