#pragma once

#include "Punto.hpp"

class Circulo {
private:
    Punto m_centro;
    float m_radio;
public:
    float getRadio();
    void setRadio(float t_radio);

    Punto getCentro();
    void setCentro(Punto t_centro);
    Circulo(Punto t_centro = 0, float t_radio = 0);
    ~Circulo() = default;
};
