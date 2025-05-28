#pragma once

#include "Presion.hpp"
#include "Posicion.hpp"

#include <iostream>

class SaveFlightData {
public:
    Posicion posicion;
    Presion presion;
public:
    void imprimir() const;
    //TODO deben coincidir los parametros con el diagrama?
    void serializar(std::ofstream& t_out) const;
    void deSerializar(std::ifstream& t_in);
    
    SaveFlightData(const Posicion& t_posicion, const Presion& t_presion); 
    ~SaveFlightData() = default;
};
