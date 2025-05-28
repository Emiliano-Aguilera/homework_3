#include "MedicionBase.hpp"

IMediciones::~IMediciones() {} // Destructor de Imediciones, la interfaz, debe tener algun tipo de implementacion.


void MedicionBase::serializar(std::ofstream& t_out) const {
    t_out.write(reinterpret_cast<const char*>(m_tiempoMedicion.get()), sizeof(float));
}

void MedicionBase::deSerializar(std::ifstream& t_in) {
    float tiempoMedicion{};

    t_in.read(reinterpret_cast<char*>(&tiempoMedicion), sizeof(float));
    m_tiempoMedicion = std::make_unique<float>(tiempoMedicion);
}

float MedicionBase::getTiempo() const {
     return *m_tiempoMedicion;
}

MedicionBase::~MedicionBase() {}