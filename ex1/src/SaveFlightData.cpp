#include "SaveFlightData.hpp"
#include <fstream>


void SaveFlightData::imprimir() const {
    m_posicion.imprimir();
    m_presion.imprimir();
}

void SaveFlightData::serializar(std::ofstream& t_out) const {
    // Serializacion de posicion
    m_posicion.serializar(t_out);
    t_out.write(reinterpret_cast<const char*>(&m_posicion.m_latitud), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&m_posicion.m_altitud), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&m_posicion.m_longitud), sizeof(float));

    // Serializacion de Presion
    m_presion.serializar(t_out);
    t_out.write(reinterpret_cast<const char*>(&m_presion.m_presionEstatica), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&m_presion.m_presionDinamica), sizeof(float));
}

void SaveFlightData::deSerializar(std::ifstream& t_in) {
    // Serializacion de Posicion
    m_posicion.deSerializar(t_in);
    t_in.read(reinterpret_cast<char*>(&m_posicion.m_latitud), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&m_posicion.m_altitud), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&m_posicion.m_longitud), sizeof(float));

    // Deserializacion de Presion
    m_presion.deSerializar(t_in);
    t_in.read(reinterpret_cast<char*>(&m_presion.m_presionEstatica), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&m_presion.m_presionDinamica), sizeof(float));
}

SaveFlightData::SaveFlightData(const Posicion& t_posicion, const Presion&  t_presion)
    : m_posicion(t_posicion) , m_presion (t_presion) {} // TODO check que esto sea correcto