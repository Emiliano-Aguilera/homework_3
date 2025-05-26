#pragma once

class Punto {
private:
    float m_x, m_y;
public:
    float getX();
    void setX(float t_x);

    float getY();
    void setY(float t_y);

    Punto(float t_x = 0.0, float t_y = 0.0);
    ~Punto() = default;
};
