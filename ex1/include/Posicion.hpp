#pragma once

#include "MedicionBase.hpp"


class Posicion : public MedicionBase {
public:
    float latitud, longitud, altitud;
public:
    void imprimir() const override;

    // TODO deben coincidir los parametros con el diagrama?

    void serializar(std::ofstream& t_out) const override;
    void deSerializar(std::ifstream& t_in) override;
    
    // Constructor default, toma los valores con los que se inicializa la clase.
    Posicion(float t_latitud, float t_longitud, float t_altitud, float t_tiempo);

    // Copy constructor, permite "copiar" la clase ya que esta hereda un unique_ptr. Realiza deep copy del unique_ptr
    Posicion(const Posicion& t_posicion);

    ~Posicion() = default;
};
