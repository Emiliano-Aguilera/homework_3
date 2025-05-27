#pragma once
#include <type_traits>
#include <cmath>

#include "Punto.hpp"
#include "Elipse.hpp"
#include "Circulo.hpp"
#include "Rectangulo.hpp"

template <typename T>
class ProcesadorFigura {
private:
    T m_figura;
public:
    float calcularArea();
    explicit ProcesadorFigura(T t_figura) {
        m_figura = t_figura;
    }
    ~ProcesadorFigura() = default;
};

template <typename T>
float ProcesadorFigura<T>::calcularArea() {
    return 0.0f;
}

template <>
float ProcesadorFigura<Elipse>::calcularArea() {
    return m_figura.getMayor() * m_figura.getMenor() * M_PI;
}

template <>
float ProcesadorFigura<Circulo>::calcularArea() {
    return m_figura.getRadio() * m_figura.getRadio() * M_PI;
}

template <>
float ProcesadorFigura<Rectangulo>::calcularArea() {
    return m_figura.getBase() * m_figura.get_altura();
}