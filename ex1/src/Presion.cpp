#include "Presion.hpp"


void Presion::imprimir() const {
    std::cout << "- q = " << presionEstatica << std::endl;
    std::cout << "- p = " << presionDinamica << std::endl;
    std::cout << "- Tiempo de Medicion: " << getTiempo() << std::endl;
}

void Presion::serializar(std::ofstream& t_out) const {
    MedicionBase::serializar(t_out);
    t_out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(float));
    t_out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(float));
}

void Presion::deSerializar(std::ifstream& t_in) {
    MedicionBase::deSerializar(t_in);
    t_in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    t_in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

Presion::Presion(float t_presionEstatica, float t_presionDinamica, float t_tiempo) {
    presionEstatica = t_presionEstatica;
    presionDinamica = t_presionDinamica;
    m_tiempoMedicion = std::make_unique<float>(t_tiempo);
}
 