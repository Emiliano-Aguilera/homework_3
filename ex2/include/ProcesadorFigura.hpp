#pragma once

#include <type_traits>

#include "Punto.hpp"
#include "Elipse.hpp"
#include "Circulo.hpp"
#include "Rectangulo.hpp"

// Constante para PI.
constexpr double M_PI = 3.14159265358979323846; 

template <typename T>
class ProcesadorFigura {
private:
    T m_figura;
public:
    double calcularArea();
    explicit ProcesadorFigura(T t_figura) {
        m_figura = t_figura;
    }
};

template <typename T>
double ProcesadorFigura<T>::calcularArea() {
    return 0.0f;
}

template <>
double ProcesadorFigura<Elipse>::calcularArea() {
    return m_figura.getMayor() * m_figura.getMenor() * M_PI;
}

template <>
double ProcesadorFigura<Circulo>::calcularArea() {
    return m_figura.getRadio() * m_figura.getRadio() * M_PI;
}

template <>
double ProcesadorFigura<Rectangulo>::calcularArea() {
    return m_figura.getBase() * m_figura.getAltura();
}