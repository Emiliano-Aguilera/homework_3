#pragma once

class Punto {
private:
    float m_x, m_y;
public:
    float getX() const;
    void setX(float t_x);

    float getY() const;
    void setY(float t_y);

    Punto(float t_x={}, float t_y={});
};
