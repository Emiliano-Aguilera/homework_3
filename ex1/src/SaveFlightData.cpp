#include "SaveFlightData.hpp"
#include <fstream>


void SaveFlightData::imprimir() const {
    std::cout << "Posicion: " << std::endl;
    posicion.imprimir();
    std::cout << "Presion: " << std::endl;
    presion.imprimir();
}

void SaveFlightData::serializar(std::ofstream& t_out) const {
    // Serializacion de posicion
    posicion.serializar(t_out);
    // Serializacion de Presion
    presion.serializar(t_out);
}

void SaveFlightData::deSerializar(std::ifstream& t_in) {
    // Serializacion de Posicion
    posicion.deSerializar(t_in);
    // Deserializacion de Presion
    presion.deSerializar(t_in);
}

SaveFlightData::SaveFlightData(const Posicion& t_posicion, const Presion&  t_presion)
    : posicion(t_posicion), presion (t_presion) {} // TODO check que esto sea correcto