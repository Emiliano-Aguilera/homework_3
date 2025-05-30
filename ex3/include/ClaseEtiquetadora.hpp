#pragma once

#include <map>
#include <memory>
#include <iostream>

#include "ClaseVector.hpp"
#include "BaseVector.hpp"

using TagVectorPair = std::pair<std::string, std::unique_ptr<BaseVector>>;

class ClaseEtiquetadora {
private:
    std::vector<TagVectorPair> m_taggedVectors {};
public:
    // Toma una string y un BaseVector y los asocia en un std::pair.
    void etiquetarVector(std::string t_tag, std::unique_ptr<BaseVector> t_vec);
    
    // Imprime los pares asociados con el formato de un JSON( "tag" : [vec], )
    void mostrarJSON() const;

    ClaseEtiquetadora() = default;
    ~ClaseEtiquetadora() = default;
};
