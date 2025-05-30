#pragma once

#include "Presion.hpp"
#include "Posicion.hpp"

#include <iostream>

class SaveFlightData {
public:
    Presion presion;
    Posicion posicion;
public:
    void imprimir() const;
    void serializar(std::ofstream& t_out) const;
    void deSerializar(std::ifstream& t_in);
    
    SaveFlightData(const Posicion& t_posicion, const Presion& t_presion); 
    ~SaveFlightData() = default;
};
