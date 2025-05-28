#include "Punto.hpp"

float Punto::getX() const {
    return m_x;
}

void Punto::setX(float t_x) {
    m_x = t_x;
}

float Punto::getY() const {
    return m_y;
}

void Punto::setY(float t_y) {
    m_y = t_y;
}

Punto::Punto(float t_x, float t_y) {
    m_x = t_x;
    m_y = t_y;
}

