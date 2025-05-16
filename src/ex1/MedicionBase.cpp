#include "MedicionBase.hpp"

IMediciones::~IMediciones() {}

void MedicionBase::serializar(std::ofstream& t_out) const {
    t_out.write(reinterpret_cast<char*>(m_tiempoMedicion.get()), sizeof(float));
}

void MedicionBase::deSerializar(std::ifstream& t_in) {
    float* x = new float;
    t_in.read(reinterpret_cast<char*>(x), sizeof(float));
    m_tiempoMedicion = std::make_unique<float>(x);
}

float MedicionBase::getTiempo() const {
     return *m_tiempoMedicion;
}

MedicionBase::~MedicionBase() {}