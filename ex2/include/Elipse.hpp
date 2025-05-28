#pragma once

#include "Punto.hpp"

class Elipse {
private:
    Punto m_centro;
    float m_mayor, m_menor;
public:
    float getMayor() const;
    void setMayor(float t_mayor);
    
    float getMenor() const;
    void setMenor(float t_menor);

    const Punto& getCentro() const;
    void setCentro(const Punto& t_centro);

    Elipse(Punto t_centro={}, float t_mayor={}, float t_menor={});
};
