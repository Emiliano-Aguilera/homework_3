#pragma once 

#include "Punto.hpp"

class Rectangulo {
private:
    Punto m_esquina;
    float m_base, m_altura;
public:
    const Punto& getEsquina() const;
    void setEsquina(const Punto& t_esquina);

    float getBase() const;
    void setBase(float t_base);

    float getAltura() const;
    void setAltura(float t_altura);

    Rectangulo(Punto t_esquina={}, float t_base={}, float t_altura={});
};