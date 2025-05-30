#pragma once

#include "MedicionBase.hpp"


class Posicion : public MedicionBase {
public:
    float latitud, longitud, altitud;
public:
    void imprimir() const override final;

    void serializar(std::ofstream& t_out) const override final;
    void deSerializar(std::ifstream& t_in) override final;
    
    Posicion(float t_latitud, float t_longitud, float t_altitud, float t_tiempo);

    ~Posicion() = default;
};
