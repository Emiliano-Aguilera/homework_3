#include "Elipse.hpp"

double Elipse::getMayor() const {
    return m_mayor;
}

void Elipse::setMayor(double t_mayor) {
    m_mayor = t_mayor;
}

double Elipse::getMenor() const {
    return m_menor;
}

void Elipse::setMenor(double t_menor) {
    m_menor = t_menor;
}

const Punto& Elipse::getCentro() const {
    return m_centro;
}

void Elipse::setCentro(const Punto& t_centro) {
    m_centro = t_centro;
}

Elipse::Elipse(Punto t_centro, double t_mayor, double t_menor)
    : m_centro(t_centro), m_mayor(t_mayor), m_menor(t_menor) {}