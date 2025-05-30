#pragma once

class Punto {
private:
    double m_x, m_y;
public:
    double getX() const;
    void setX(double t_x);

    double getY() const;
    void setY(double t_y);

    Punto(double t_x=0, double t_y=0);
};
