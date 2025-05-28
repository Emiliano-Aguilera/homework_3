#include "Rectangulo.hpp"

const Punto& Rectangulo::getEsquina() const {
    return m_esquina;
}

void Rectangulo::setEsquina(const Punto& t_esquina) {
    m_esquina = t_esquina;
}

double Rectangulo::getBase() const {
    return m_base;
}

void Rectangulo::setBase(double t_base) {
    m_base = t_base;
}

double Rectangulo::getAltura() const {
    return m_altura;
}

void Rectangulo::setAltura(double t_altura) {
    m_altura = t_altura;
}

Rectangulo::Rectangulo(Punto t_esquina, double t_base, double t_altura) 
    : m_esquina(t_esquina), m_base(t_base), m_altura(t_altura) {}