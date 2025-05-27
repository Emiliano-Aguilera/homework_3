#pragma once

#include "IMediciones.hpp"

#include <memory>
#include <iostream>
#include <fstream>

class MedicionBase : public IMediciones{
protected:
    std::unique_ptr<float> m_tiempoMedicion;
public:
    void serializar(std::ofstream& t_out) const override;
    void deSerializar(std::ifstream& t_in) override;

    float getTiempo() const;
    virtual void imprimir() const = 0; // TODO esta bien que sea virtual puro?

    virtual ~MedicionBase() = 0;
};
