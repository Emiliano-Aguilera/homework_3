#pragma once

class BaseVector {
public:
    virtual void mostrarVector() const = 0;
    
    BaseVector() = default;
    virtual ~BaseVector() = default;
};

