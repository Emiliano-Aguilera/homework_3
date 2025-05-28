#include "ClaseEtiquetadora.hpp"

void ClaseEtiquetadora::etiquetarVector(std::string t_tag, std::unique_ptr<BaseVector> t_vec) {
    m_taggedVectors.push_back(TagVectorPair(t_tag, std::move(t_vec))); // String vector pair esta definido en la declaracion de la clase.
}

void ClaseEtiquetadora::mostrarJSON() const {
    std::string sep = "";

    std::cout << "{ "; // Llave inicio de JSON
    for(const auto& [i_tag, i_vec] : m_taggedVectors) {
        std::cout << sep; // Separador para poner comas entre cada par 
        
        std::cout << "\"" << i_tag << "\""; // "tag"
        std::cout << " : "; // "tag" : 
        i_vec->mostrarVector(); // "tag" : [...]'

        sep = ", \n  "; // "tag" : [...],
    }
    std::cout << "\n}" << std::endl; // Llave fin JSON
}