#include "Posicion.hpp"

void Posicion::imprimir() const {
    std::cout << "Latitud: " << m_latitud << std::endl;
    std::cout << "Longitud: " << m_longitud << std::endl;
    std::cout << "Altitud: " << m_altitud << std::endl;
    std::cout << "Tiempo de Medicion: " << getTiempo() << std::endl;
}   

Posicion::Posicion(float t_latitud, float t_longitud, float t_altitud, float t_tiempo) {
    m_latitud = t_latitud;
    m_longitud = t_longitud;
    m_altitud = t_altitud;
    m_tiempoMedicion = std::make_unique<float>(t_tiempo);
}

Posicion::Posicion(const Posicion& t_posicion) {
    m_latitud = t_posicion.m_latitud;
    m_longitud = t_posicion.m_longitud;
    m_altitud = t_posicion.m_altitud;
    m_tiempoMedicion = std::make_unique<float>(t_posicion.getTiempo());
}
