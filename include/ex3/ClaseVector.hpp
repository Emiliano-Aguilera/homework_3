#pragma once

#include <vector>
#include <type_traits>

template <typename T>
class ClaseVector {
private:
    std::vector<T> m_vector;
public:
    void agregarValor(T t_valor) {
        m_vector.push_back(t_valor);
    }

    void mostrarVector() {
        if constexpr (std::is_same_v<T, double>) {
            std::cout << '[';
            // Iterar vector de doubles
            std::string_view sep = "";
            for (auto val : m_vector) {
                std::cout << sep << val;
                sep = ", ";
            }
            std::cout << ']';
        }
        else if constexpr (std::is_same_v<T, std::string>) {
            std::cout << '[';
            // Iterar vector de Strings
            std::string_view sep = "";
            for (auto val : m_vector) {
                std::cout << sep << "\"" << val << "\"";
                sep = ", ";
            }
            std::cout << ']';
        }
        else if constexpr (std::is_same_v<T, std::vector<int>>) {
            std::cout << '[' << std::endl;

            // Iterar sobre las sublistas
            std::string_view sep = "";
            for (auto subVec : m_vector) {
                std::cout << sep;
                std::cout << "\t   [";

                std::string_view sep2 = "";
                for (double val : subVec) {
                    std::cout << sep2 << val;
                    sep2 = ", ";
                }

                std::cout << ']';
                sep = ", \n";
            }
            std::cout << std::endl << "\t  ]";
        }
        else {
            std::cout << "Default" << std::endl;
        }
    }

    ClaseVector() = default;
    ~ClaseVector() = default;
};