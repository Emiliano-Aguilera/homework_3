#include "Rectangulo.hpp"

Punto Rectangulo::getEsquina() {
    return m_esquina;
}

void Rectangulo::setEsquina(Punto t_esquina) {
    m_esquina = t_esquina;
}

float Rectangulo::getBase() {
    return m_base;
}

void Rectangulo::setBase(float t_base) {
    m_base = t_base;
}

float Rectangulo::get_altura() {
    return m_altura;
}

void Rectangulo::set_altura(float t_altura) {
    m_altura = t_altura;
}

Rectangulo::Rectangulo(Punto t_esquina, float t_base, float t_altura) {
    m_esquina = t_esquina;
    m_base = t_base;
    m_altura = t_altura;
}