#pragma once

#include "IMediciones.hpp"

#include <memory>

#include <fstream>

class MedicionBase : public IMediciones {
protected:
    std::unique_ptr<float> m_tiempoMedicion;
public:
    // TODO deben coincidir los parametros con el diagrama?
    void serializar(std::ofstream& t_out) const override;
    void deSerializar(std::ifstream& t_in) override;

    float getTiempo() const;
    virtual void imprimir() const = 0;

    virtual ~MedicionBase() = 0;
};
