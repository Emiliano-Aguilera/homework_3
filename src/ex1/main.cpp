#include <iostream>
#include <fstream>
#include "SaveFlightData.hpp"

int main() {
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData original(posicion, presion);

    std::ofstream out("flightdata.bin", std::ios::binary);
    if (out) {
        original.serializar(out);
        out.close();
    } else {
        std::cerr << "Error opening file for writing\n";
        return 1;
    }

    // Objetos que almacenan los datos a deserializar
    Posicion pos2(0, 0, 0, 0);
    Presion pres2(0, 0, 0);
    SaveFlightData loaded(pos2, pres2);

    // Deserializar
    std::ifstream in("flightdata.bin", std::ios::binary);
    if (in) {
        loaded.deSerializar(in);
        in.close();
    } else {
        std::cerr << "Error opening file for reading\n";
        return 1;
    }

    // Imprimir valores de ambos, para ver que se serializa correctamente.
    std::cout << "Original:\n";
    original.imprimir();
    std::cout << "\nLoaded:\n";
    loaded.imprimir();

    return 0;
}