#include "Circulo.hpp"

float Circulo::getRadio() {
    return m_radio;
}

void Circulo::setRadio(float t_radio) {
    m_radio = t_radio;
}

Punto Circulo::getCentro() {
    return m_centro;
}

void Circulo::setCentro(Punto t_centro) {
    m_centro = t_centro;
}


Circulo::Circulo(Punto t_centro, float t_radio) {
    m_centro = t_centro;
    m_radio = t_radio;
}