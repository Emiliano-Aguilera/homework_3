#pragma once

#include "Punto.hpp"

class Circulo {
private:
    Punto m_centro;
    double m_radio;
public:
    double getRadio() const;
    void setRadio(double t_radio);

    const Punto& getCentro() const;
    void setCentro(const Punto& t_centro);
    
    Circulo(Punto t_centro=Punto{}, double t_radio={});
};
