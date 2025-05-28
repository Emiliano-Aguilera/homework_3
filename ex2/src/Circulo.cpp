#include "Circulo.hpp"

double Circulo::getRadio() const {
    return m_radio;
}

void Circulo::setRadio(double t_radio) {
    m_radio = t_radio;
}

const Punto& Circulo::getCentro() const {
    return m_centro;
}

void Circulo::setCentro(const Punto& t_centro) {
    m_centro = t_centro;
}

Circulo::Circulo(Punto t_centro, double t_radio)
    : m_centro(t_centro), m_radio(t_radio) {}