#include "Rectangulo.hpp"
#include <stdexcept>

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
    if(t_base < 0) {
        throw std::invalid_argument("Las dimensiones no pueden ser negativas");
    }
    m_base = t_base;
}

double Rectangulo::getAltura() const {
    return m_altura;
}

void Rectangulo::setAltura(double t_altura) {
    if(t_altura < 0) {
        throw std::invalid_argument("Las dimensiones no pueden ser negativas");
    }
    m_altura = t_altura;
}

Rectangulo::Rectangulo(Punto t_esquina, double t_base, double t_altura) 
    : m_esquina(t_esquina), m_base(t_base), m_altura(t_altura) {
    if(t_base < 0 || t_altura < 0) {
        throw std::invalid_argument("Las dimensiones no pueden ser negativas");
    }
}