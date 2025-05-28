#pragma once

#include "Punto.hpp"

class Circulo {
private:
    Punto m_centro;
    float m_radio;
public:
    float getRadio() const;
    void setRadio(float t_radio);

    const Punto& getCentro() const;
    void setCentro(const Punto& t_centro);
    
    Circulo(Punto t_centro=Punto{}, float t_radio={});
};
