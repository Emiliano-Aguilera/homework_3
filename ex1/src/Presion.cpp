#include "Presion.hpp"

Presion::Presion(float t_presionEstatica, float t_presionDinamica, float t_tiempo) {
    m_presionEstatica = t_presionEstatica;
    m_presionDinamica = t_presionDinamica;
    m_tiempoMedicion = std::make_unique<float>(t_tiempo);
}

void Presion::imprimir() const{
    std::cout << "q = " << m_presionEstatica << std::endl;
    std::cout << "p = " << m_presionDinamica << std::endl;
    std::cout << "Tiempo de Medicion: " << getTiempo() << std::endl;
}

// TODO check que tener un copy constructor es una buena forma de hacerlo.
Presion::Presion(const Presion& t_presion) {
    m_presionEstatica = t_presion.m_presionEstatica;
    m_presionDinamica = t_presion.m_presionDinamica;
    m_tiempoMedicion = std::make_unique<float>(t_presion.getTiempo());
}