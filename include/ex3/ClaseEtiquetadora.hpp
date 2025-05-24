#pragma once

#include <vector>
#include <iostream>

#include "ClaseVector.hpp"

class ClaseEtiquetadora
{
private:
    ClaseVector<double> m_dobles;
    ClaseVector<std::string> m_palabras;
    ClaseVector<std::vector<int>> m_matriz;
public:
    ClaseEtiquetadora(ClaseVector<double>, ClaseVector<std::string>, ClaseVector<std::vector<int>>);
    ~ClaseEtiquetadora() = default;

    void mostrarJSON();

};

ClaseEtiquetadora::ClaseEtiquetadora(ClaseVector<double> t_dobles, ClaseVector<std::string> t_strings, ClaseVector<std::vector<int>> t_matriz) {
    m_dobles = t_dobles;
    m_palabras = t_strings;
    m_matriz = t_matriz;
}

void ClaseEtiquetadora::mostrarJSON() {
    std::cout << "{" << " \"" << "vec_doubles" << "\"" << " : ";
    m_dobles.mostrarVector();
    std::cout << ',' << std::endl;
    
    std::cout << "  \"" << "palabras" << "\"" << " : ";
    m_palabras.mostrarVector();
    std::cout << ',' << std::endl;

    std::cout << "  \"" << "listas" << "\"" << " : ";
    m_matriz.mostrarVector();
    std::cout << std::endl << '}';
}