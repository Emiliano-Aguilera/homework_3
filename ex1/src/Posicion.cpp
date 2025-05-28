#include "Posicion.hpp"

void Posicion::imprimir() const {
    std::cout << "- Latitud: " << latitud << std::endl;
    std::cout << "- Longitud: " << longitud << std::endl;
    std::cout << "- Altitud: " << altitud << std::endl;
    std::cout << "- Tiempo de Medicion: " << getTiempo() << std::endl;
}

void Posicion::serializar(std::ofstream& t_out) const {
    MedicionBase::serializar(t_out);
    t_out.write(reinterpret_cast<const char*>(&latitud), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&altitud), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&longitud), sizeof(float));
}

void Posicion::deSerializar(std::ifstream& t_in) {
    MedicionBase::deSerializar(t_in);
    t_in.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&altitud), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&longitud), sizeof(float));
}

Posicion::Posicion(float t_latitud, float t_longitud, float t_altitud, float t_tiempo) {
    latitud = t_latitud;
    longitud = t_longitud;
    altitud = t_altitud;
    m_tiempoMedicion = std::make_unique<float>(t_tiempo);
}

Posicion::Posicion(const Posicion& t_posicion) {
    latitud = t_posicion.latitud;
    longitud = t_posicion.longitud;
    altitud = t_posicion.altitud;
    m_tiempoMedicion = std::make_unique<float>(t_posicion.getTiempo());
}
