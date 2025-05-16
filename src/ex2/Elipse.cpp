#include "Elipse.hpp"

float Elipse::getMayor() {
    return m_mayor;
}

void Elipse::setMayor(float t_mayor) {
    m_mayor = t_mayor;
}

float Elipse::getMenor() {
    return m_menor;
}

void Elipse::setMenor(float t_menor) {
    m_menor = t_menor;
}

Punto Elipse::getCentro() {
    return m_centro;
}

void Elipse::setCentro(Punto t_centro) {
    m_centro = t_centro;
}

Elipse::Elipse(Punto t_centro, float t_mayor, float t_menor) {
    m_centro = t_centro;
    m_mayor = t_mayor;
    m_menor = t_menor; 
}