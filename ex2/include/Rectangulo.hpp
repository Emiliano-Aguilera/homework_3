#pragma once 

#include "Punto.hpp"

class Rectangulo {
private:
    Punto m_esquina;
    float m_base, m_altura;
public:
    Punto getEsquina();
    void setEsquina(Punto t_esquina);

    float getBase();
    void setBase(float t_base);

    float get_altura();
    void set_altura(float t_altura);

    Rectangulo(Punto t_esquina = 0, float t_base = 0, float t_altura = 0);
    ~Rectangulo() = default;
};