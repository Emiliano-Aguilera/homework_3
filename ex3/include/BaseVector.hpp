#pragma once

class BaseVector {
public:
    virtual std::string mostrarVector() const = 0;
    
    BaseVector() = default;
    virtual ~BaseVector() = default;
};

