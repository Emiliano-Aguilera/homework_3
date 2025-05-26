#pragma once

#include <iostream>

class IMediciones {
public:
    virtual void serializar(std::ofstream& t_out) const = 0;
    virtual void deSerializar(std::ifstream& t_in) = 0;

    virtual ~IMediciones() = 0;
};
