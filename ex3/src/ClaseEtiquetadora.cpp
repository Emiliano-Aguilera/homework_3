#include "ClaseEtiquetadora.hpp"

void ClaseEtiquetadora::etiquetarVector(std::string t_tag, std::unique_ptr<BaseVector> t_vec) {
    // TagVectorPair esta definido en la declaracion de la clase.
    m_taggedVectors.push_back(TagVectorPair(t_tag, std::move(t_vec))); 
}

void ClaseEtiquetadora::mostrarJSON() const {
    if (m_taggedVectors.empty()) {
        std::cout << "El JSON esta vacio." << std::endl;
    }
    else {
        std::string sep = "";
    
        std::cout << "{ "; // Llave inicio de JSON
        for(const auto& [i_tag, i_vec] : m_taggedVectors) {
            std::cout << sep; // Separador para poner comas entre cada par 
            
            std::cout << "\"" << i_tag << "\""; // "tag"
            std::cout << " : "; // "tag" : 
            std::cout << i_vec->mostrarVector(); // "tag" : [...]'
    
            sep = ", \n  "; // "tag" : [...],
        }
        std::cout << "\n}" << "\n"; // Llave fin JSON
    }
}