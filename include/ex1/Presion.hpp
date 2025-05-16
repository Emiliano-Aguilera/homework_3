#pragma once

#include "MedicionBase.hpp"

class Presion : public MedicionBase{
public:
    float m_presionEstatica; // p
    float m_presionDinamica; // q
public:
    void imprimir() const override;

    Presion(float t_presionEstatica, float t_presionDinamica, float t_tiempo);
    Presion(const Presion& t_presion); // Copy constructor
    ~Presion() = default;
};