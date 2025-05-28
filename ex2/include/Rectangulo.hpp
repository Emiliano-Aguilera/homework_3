#pragma once 

#include "Punto.hpp"

class Rectangulo {
private:
    Punto m_esquina;
    double m_base, m_altura;
public:
    const Punto& getEsquina() const;
    void setEsquina(const Punto& t_esquina);

    double getBase() const;
    void setBase(double t_base);

    double getAltura() const;
    void setAltura(double t_altura);

    Rectangulo(Punto t_esquina={}, double t_base={}, double t_altura={});
};