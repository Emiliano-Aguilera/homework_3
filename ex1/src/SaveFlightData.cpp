#include "SaveFlightData.hpp"
#include <fstream>


void SaveFlightData::imprimir() const {
    std::cout << "Posicion: " << std::endl;
    posicion.imprimir();
    std::cout << "Presion: " << std::endl;
    presion.imprimir();
}

void SaveFlightData::serializar(std::ofstream& t_out) const {
    // Serializacion de posicion
    posicion.serializar(t_out);
    // Serializacion de Presion
    presion.serializar(t_out);
}

void SaveFlightData::deSerializar(std::ifstream& t_in) {
    // Deserializacion de Posicion
    posicion.deSerializar(t_in);
    // Deserializacion de Presion
    presion.deSerializar(t_in);
}

SaveFlightData::SaveFlightData(const Posicion& t_posicion, const Presion&  t_presion) 
    :
    presion(t_presion.presionEstatica, t_presion.presionDinamica, t_presion.getTiempo()),
    posicion(t_posicion.latitud, t_posicion.longitud, t_posicion.altitud, t_posicion.getTiempo())
{}
/*
Por que se inicializa por lista:
Al inicializar por lista(antes de que el scope del constructor se cree) los objetos presion y posicion
todavia no se crean, y por lo tanto no tienen un unique_ptr, que es lo que genera problemas cuando 
queremos asignar dentro del cuerpo del constructor. Al pasar los parametros de inicializacion antes
de instanciar lo objetos, es decir inicializando por lista, presion y posicion se inicializan con los
valores dados por el constructor. Copiamos el valor del unique_ptr del tiempo.
*/