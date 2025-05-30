#pragma once

#include "MedicionBase.hpp"

class Presion : public MedicionBase {
public:
    float presionEstatica; // p
    float presionDinamica; // q
public:
    void imprimir() const override;

    void serializar(std::ofstream& t_out) const override;
    void deSerializar(std::ifstream& t_in) override;
    
    Presion(float t_presionEstatica, float t_presionDinamica, float t_tiempo);
    ~Presion() = default;
};