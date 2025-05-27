#pragma once

#include "Punto.hpp"

class Elipse {
private:
    Punto m_centro;
    float m_mayor, m_menor;
public:
    float getMayor();
    void setMayor(float t_mayor);
    
    float getMenor();
    void setMenor(float t_menor);

    Punto getCentro();
    void setCentro(Punto t_centro);

    Elipse(Punto t_centro = 0, float t_mayor = 0, float t_menor = 0);
    ~Elipse() = default;
};
