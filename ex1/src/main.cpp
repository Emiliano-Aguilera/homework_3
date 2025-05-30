#include <iostream>
#include <fstream>
#include "SaveFlightData.hpp"

int main() {
    std::cout << "EJERCICIO 1" << std::endl << std::endl;
    /*
    * Este path asume que:
    * se usa CMAKE y el ejecutable esta en build/bin
    * hay una carpeta a la misma altura que build llamada ex1
    */
    const std::string FLIGHTDATA_PATH = "../../ex1/flightdata.bin";

    // Inicializar datos originales
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);
    SaveFlightData original(posicion, presion);

    // Serializar a archivo binario
    std::ofstream out(FLIGHTDATA_PATH, std::ios::binary);
    
    if (!out) {
        std::cerr << "Error abriendo el archivo para serializar.\n";
        return 1;
    }
    original.serializar(out);
    out.close();

    // Preparar objetos para deserializar
    Posicion posicionDeserializada(0, 0, 0, 0);
    Presion presionDeserializada(0, 0, 0);
    SaveFlightData cargado(posicionDeserializada, presionDeserializada);

    // Deserializar desde archivo binario
    std::ifstream in(FLIGHTDATA_PATH, std::ios::binary);
    if (!in) {
        std::cerr << "Error abriendo el archivo para deserializar.\n";
        return 1;
    }
    cargado.deSerializar(in);
    in.close();

    // Imprimir resultados
    std::cout << "Original:\n\n";
    original.imprimir();
    std::cout << "\n\n";
    std::cout << "Cargado:\n\n";
    cargado.imprimir();

    return 0;
}