#include "Elipse.hpp"
#include <stdexcept>

double Elipse::getMayor() const {
    return m_mayor;
}

void Elipse::setMayor(double t_mayor) {
    if (t_mayor < 0) {
        throw std::invalid_argument("No puede tener dimensiones negativas");
    }
    m_mayor = t_mayor;
}

double Elipse::getMenor() const {
    return m_menor;
}

void Elipse::setMenor(double t_menor) {
    if (t_menor < 0) {
        throw std::invalid_argument("No puede tener dimensiones negativas");
    }
    m_menor = t_menor;
}

const Punto& Elipse::getCentro() const {
    return m_centro;
}

void Elipse::setCentro(const Punto& t_centro) {
    m_centro = t_centro;
}

Elipse::Elipse(Punto t_centro, double t_mayor, double t_menor)
    : m_centro(t_centro), m_mayor(t_mayor), m_menor(t_menor) {

    if (t_mayor < 0 || t_menor < 0) {
        throw std::invalid_argument("No puede tener dimensiones negativas");
    }
}