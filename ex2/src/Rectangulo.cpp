#include "Rectangulo.hpp"

const Punto& Rectangulo::getEsquina() const {
    return m_esquina;
}

void Rectangulo::setEsquina(const Punto& t_esquina) {
    m_esquina = t_esquina;
}

float Rectangulo::getBase() const {
    return m_base;
}

void Rectangulo::setBase(float t_base) {
    m_base = t_base;
}

float Rectangulo::getAltura() const {
    return m_altura;
}

void Rectangulo::setAltura(float t_altura) {
    m_altura = t_altura;
}

Rectangulo::Rectangulo(Punto t_esquina, float t_base, float t_altura) 
    : m_esquina(t_esquina), m_base(t_base), m_altura(t_altura) {}