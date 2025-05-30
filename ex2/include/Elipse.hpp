#pragma once

#include "Punto.hpp"

class Elipse {
private:
    Punto m_centro;
    double m_mayor, m_menor;
public:
    double getMayor() const;
    void setMayor(double t_mayor);
    
    double getMenor() const;
    void setMenor(double t_menor);

    const Punto& getCentro() const;
    void setCentro(const Punto& t_centro);

    Elipse(Punto t_centro={}, double t_mayor=0, double t_menor=0);
};
