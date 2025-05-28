#include "Punto.hpp"

double Punto::getX() const {
    return m_x;
}

void Punto::setX(double t_x) {
    m_x = t_x;
}

double Punto::getY() const {
    return m_y;
}

void Punto::setY(double t_y) {
    m_y = t_y;
}

Punto::Punto(double t_x, double t_y) {
    m_x = t_x;
    m_y = t_y;
}

