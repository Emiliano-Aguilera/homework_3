#pragma once

#include "BaseVector.hpp"

#include <vector>
#include <stdexcept>
#include <sstream>

template <typename T>
/*
* ClaseVector Hereda de BaseVector para lograr Polimorfismo usando templates de ClaseVector.
* La clase contiene un vector de tipo T, siendo T el tipo de dato con el que se construye la clase.
* No se permite eliminar valores del vector porque se asume que esta clase deberia ser usada para deserializar un JSON, 
* no para interactuar con el usuario/programador de otra forma. Para uso mas general, usar std::vector.
*/
class ClaseVector : public BaseVector {
private:
    std::vector<T> m_vector;
public:
    // Hace un push_back del valor. Igual que un std::vector
    void agregarValor(const T& t_valor) {
        m_vector.push_back(t_valor);
    }

    std::string mostrarVector() const override final {
        std::ostringstream output{}; // stream a llenar con el vector formateado
        
        // Uso sep para poner una "," al final de todos los elementos excepto el ultimo. Evita checkeos y hace mas legible la iteracion.
        
        // Caso vector de double.
        if constexpr (std::is_same_v<T, double>) {
            std::string_view sep = ""; // Variable separadora

            output << '['; // Corchete de inicio de vector
            for (const auto& val : m_vector) {
                output << sep << val; // [val
                sep = ", "; // [val, 
            }
            output << ']'; // [val, ...]
        }
        // Caso vector strings.
        else if constexpr (std::is_same_v<T, std::string>) {
            std::string_view sep = "";
            
            output << '[';
            for (const auto& val : m_vector) {
                output << sep << "\"" << val << "\"";
                sep = ", ";
            }
            output << ']';
        }
        // Caso matriz de ints.
        else if constexpr (std::is_same_v<T, std::vector<int>>) {
            std::string_view sep = ""; // Separador de elementos de la matriz
            
            output << '[' << "\n"; // Corchete de inicio de matriz
            for (const auto& subVec : m_vector) {
                output << sep; // Separador subelemento de la matriz

                output << "\t   ["; // Corchete inicio sublista

                std::string_view sep2 = "";
                for (const auto& val : subVec) {
                    output << sep2 << val;
                    sep2 = ", ";
                }
                output << ']'; // Corchete fin sublista

                sep = ", \n";
            }
            output << "\n" << "\t  ]"; // Corchete final de matriz
        }
        // Caso default, lanza un runtime error. Si se usase template specialization, no haria falta.
        else {
            throw std::runtime_error("Tipo no soportado en el Template.");
        }

        return output.str();
    }

    ClaseVector() = default;
    ~ClaseVector() = default;
};