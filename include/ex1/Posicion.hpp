#pragma once

#include "MedicionBase.hpp"


class Posicion : public MedicionBase{
public:
    float m_latitud, m_longitud, m_altitud;
public:
    void imprimir() const override;
    
    Posicion(float t_latitud, float t_longitud, float t_altitud, float t_tiempo);
    Posicion(const Posicion& t_posicion);
    ~Posicion() = default;
};
